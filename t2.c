#include <stdio.h>
#include <string.h>

// hello
// heo

void delete(char *s, char *s2);

void mystrcat(char *s1, char *s2);

char mylower(char c);

int bsearch(int *arr, int x, int n);

void escape(char *s, char *t);


int main(void) {

       char str[] = "ello";
       char str2[] = "how";

       delete(str, str2);

       printf("%s\n", str);

       mystrcat(str, "hello");
       printf("%s\n", str);

       printf("%c %c %c\n", mylower('A'), mylower('x'), mylower('F'));

       int arr[] = {2, 3, 6, 7, 9, 34, 677, 754, 1234};
       printf("search: %d\n", bsearch(arr, 2, sizeof(arr) / sizeof(int)));

       char a[20];
       char *b = "H\te\tl\tl\t0!\n";

       escape(a, b);
       printf("%s\n", a);

       return 0;
}

void escape(char *s, char *t) {
       int k = 0;
       for (int i = 0; t[i] != '\0'; i++) {
               switch(t[i]) {
                       case '\n':
                               s[k++] = '\\';
                               s[k++] = 'n';
                               break;
                       case '\t':
                               s[k++] = '\\';
                               s[k++] = 't';
                               break;
                       default:
                               s[k++] = t[i];
                               break;
               }
       }
}

void delete(char *s, char *s2) {
       int k = 0;
       for (int j = 0; s[j] != '\0'; j++) {
               char flag = 0;

               for (int i = 0; s2[i] != '\0'; i++) {
                       if (s[j] == s2[i]) {
                               flag = 1;
                               break;
                       }
               }

               if (!flag) {
                       s[k++] = s[j];
               }
       }

       s[k] = '\0';
}

void mystrcat(char *s1, char *s2) {
       int i, k;
       k = 0;
       for (i = 0; s1[i] != '\0'; i++);

       while ((s1[i++] = s2[k++]) != '\0');
}

char mylower(char c) {
       int res = (c >= 'A' && c <= 'Z') ? c + ('a' - 'A') : c;

       return res;
}

int bsearch(int *arr, int x, int n) {
       int start = 0;
       int end = n - 1;
       int mid = (start + end) / 2;

       while (start <= end && arr[mid] != x) {
               if (x < arr[mid]) {
                       end = mid - 1;
               } else {
                       start = mid + 1;
               }
               mid = (start + end) / 2;
       }

       if (arr[mid] == x) {
               return mid;
       } else {
               return -1;
       }

}
