#include <stdio.h>

#define READ_PERMISSION  0x1 // 0001
#define WRITE_PERMISSION 0x2 // 0010
#define EXECUTE_PERMISSION 0x4 // 0100

int main() {
    int userPermissions = 0;

    // Grant read and write permissions
    userPermissions |= (READ_PERMISSION | WRITE_PERMISSION); // 0011
    
    // Check permissions
    if (userPermissions & READ_PERMISSION) {
        printf("User has read permission.\n");
    }
    if (userPermissions & WRITE_PERMISSION) {
        printf("User has write permission.\n");
    }
    if (!(userPermissions & EXECUTE_PERMISSION)) {
        printf("User does not have execute permission.\n");
    }

    return 0;
}
