int count(string s1, string s2)
{
        int m = s1.length();
        int n = s2.length();
        for (int i = 0; i <= m; i++) {
                v[i][0] = i;
        }
        for (int j = 0; j <= n; j++) {
                v[0][j] = j;
        }

        for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                        if (s1[i-1] == s2[j-1]) v[i][j] = v[i-1][j-1];
                        else v[i][j] = 1 + min(min(v[i][j-1],v[i-1][j]),v[i-1][j-1]);
                }
        }

        return v[m][n];
}
