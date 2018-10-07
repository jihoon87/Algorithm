#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<float>> matT(vector<vector<float>> v) {
    int r = v.size();
    int c = v[0].size();
    vector<vector<float>> ret = vector<vector<float>>(c, vector<float>(r, 0));
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ret[j][i] = v[i][j];
        }
    }
    return ret;
}

vector<vector<float>> matI(vector<vector<float>> v) {
    int n = v.size();
    vector<vector<float>> a(n, vector<float>(n*2, 0));
    vector<vector<float>> ret(n, vector<float>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = v[i][j];
        }
    }
    for (int i = 0; i<n; i++)
    {
        for (int j = n; j<2 * n; j++)
        {
            if (i == j - n)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    for (int i = 0; i<n; i++)
    {
        float t = a[i][i];
        for (int j = i; j<2 * n; j++)
            a[i][j] = a[i][j] / t;
        for (int j = 0; j<n; j++)
        {
            if (i != j)
            {
                t = a[j][i];
                for (int k = 0; k<2 * n; k++)
                    a[j][k] = a[j][k] - t * a[i][k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ret[i][j] = a[i][j+n];
        }
    }
    return ret;
}

vector<vector<float>> matM(vector<vector<float>> v, vector<vector<float>> v2) {
    int r = v.size();
    int c = v[0].size();
    int r2 = v2.size();
    int c2 = v2[0].size();
    vector<vector<float>> ret = vector<vector<float>>(r, vector<float>(c2, 0));
    for (int i = 0; i < r; i++) {
        for(int k = 0; k < c2; k++){
            float temp = 0;
            for (int j = 0; j < c; j++) {
                temp = temp + v[i][j] * v2[j][k];
            }
            ret[i][k] = temp;
        }
    }
    return ret;
}

vector<float> matM(vector<float> v, vector<vector<float>> v2) {
    int r = v.size();
    int r2 = v2.size();
    int c2 = v2[0].size();
    vector<float> ret = vector<float>(c2, 0);    
    for (int k = 0; k < c2; k++) {
        float temp = 0;
        for (int i = 0; i < r; i++) {
            temp = temp + v[i] * v2[i][k];
        }
        ret[k] = temp;
    }
    return ret;
}

vector<float> matM(vector<vector<float>> v, vector<float> v2) {
    int r = v.size();
    int c = v[0].size();
    int r2 = v2.size();
    vector<float> ret = vector<float>(r, 0);
    for (int i = 0; i < r; i++) {
        float temp = 0;
        for (int j = 0; j < c; j++) {
            temp = temp + v[i][j] * v2[j];
        }
        ret[i] = temp;
    }
    return ret;
}

float matM(vector<float> v, vector<float> v2) {
    int n = v.size();
    float ret = 0.0f;
    for (int i = 0; i < n; i++) {    
        ret = ret + v[i]*v2[i];
    }
    return ret;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m, n, q;
    float num;
    cin >> m >> n;
    vector<vector<float>> X(n, vector<float>(m + 1, 1));
    vector<float> Y(n, 0);
    //vector<float> B(m + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            X[i][j + 1] = num;
        }
        cin >> num;
        Y[i] = num;
    }
    vector<float> B = matM(matM(matI(matM(matT(X), X)), matT(X)), Y);
    cin >> q;
    vector<vector<float>> X_(q, vector<float>(m + 1, 1));
    //vector<float> Y_(q, 0);
    cout << fixed;
    cout.precision(2);
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            X_[i][j + 1] = num;
        }
        cout << matM(X_[i], B) + 0.005 << endl;
    }
    return 0;
}
