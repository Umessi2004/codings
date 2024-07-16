#include <stdio.h>

// Function to move a disk from source pole to destination pole
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary pole using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination pole
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary pole to destination using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the Tower of Hanoi function
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
