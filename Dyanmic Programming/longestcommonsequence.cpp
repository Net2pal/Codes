#include<iostream>
#include<cstring>
#include<algorithm>
int lcsIter(char *s, char *t) {
    int m = strlen(s);
    int n = strlen(t);

    int **ans = new int*[m+1];
    for(int i = 0; i <= m; i++) {
        ans[i] = new int[n+1];
    }

    for(int i = 0; i <= m; i++) {
        ans[i][0] = 0;
    }

    for(int j = 0; j <= n; j++) {
        ans[0][j] = 0;
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[m-i] == t[n-j]) {
                ans[i][j] = 1 + ans[i-1][j-1];
            }
            else {
                ans[i][j] = std::max(ans[i-1][j-1], std::max(ans[i-1][j], ans[i][j-1]));
            }
        }
    }
    return ans[m][n];

}
int lcs(char *s, char *t) {
    int m = strlen(s);
    int n = strlen(t);

    int **ans = new int*[m+1];
    for(int i = 0; i <= m; i++) {
        ans[i] = new int[n+1];
    }

    for(int i = 0; i <= m; i++) {
        ans[i][0] = 0;
    }

    for(int j = 0; j <= n; j++) {
        ans[0][j] = 0;
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[m-i] == t[n-j]) {
                ans[i][j] = 1 + ans[i-1][j-1];
            }
            else {
                ans[i][j] = std::max(ans[i-1][j-1], std::max(ans[i-1][j], ans[i][j-1]));
            }
        }
    }
   int index=ans[m][n];
 
   // Create a character array to store the lcs string
   char ls[index+1];
   ls[index] = '\0'; // Set the terminating character
 
   // Start from the right-most-bottom-most corner and
   // one by one store characters in lcs[]
   int i = m, j = n;
   while (i > 0 && j > 0)
   {
      // If current character in X[] and Y are same, then
      // current character is part of LCS
      if (s[i-1] == t[j-1])
      {
          ls[index-1] = s[i-1]; // Put current character in result
          i--; j--; index--;     // reduce values of i, j and index
      }
 
      // If not same, then find the larger of two and
      // go in the direction of larger value
      else if (lcs[i-1][j] > lcs[i][j-1])
         i--;
      else
         j--;
   }
 
   // Print the lcs
   std::cout << "LCS of " <<s << " and " << t<< " is " << ls<<" ";
return ans[m][n];
}
int main()
{
	char s[]="AGGTAB";
	char b[]="GXTXAYB";
	std::cout<<lcs(s,b);
	return 0;
}
