#include <stdio.h>
int main() {
    int n, rev = 0, temp, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == temp) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
