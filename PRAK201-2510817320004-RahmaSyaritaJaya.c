#include <stdio.h>
#include <string.h>

int main() {
    char nama[50], NIM[15], p[10], TTL[40], jln[70], hobi[50], no[15];

    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';
    
    printf("NIM                   : ");
    fgets(NIM, sizeof(NIM), stdin);
    NIM[strcspn(NIM, "\n")] = '\0';

    printf("Kelas Paralel         : ");
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0';

    printf("Tempat/Tanggal Lahir  : ");
    fgets(TTL, sizeof(TTL), stdin);
    TTL[strcspn(TTL, "\n")] = '\0';

    printf("Alamat                : ");
    fgets(jln, sizeof(jln), stdin);
    jln[strcspn(jln, "\n")] = '\0';

    printf("Hobby                 : ");
    fgets(hobi, sizeof(hobi), stdin);
    hobi[strcspn(hobi, "\n")] = '\0';

    printf("No. HP                : ");
    fgets(no, sizeof(no), stdin);
    no[strcspn(no, "\n")] = '\0';

        // output
        
    printf("Nama                  : %s\n", nama);
    printf("NIM                   : %s\n", NIM);
    printf("Kelas Paralel         : %s\n", p);
    printf("Tempat/Tanggal Lahir  : %s\n", TTL);
    printf("Alamat                : %s\n", jln);
    printf("Hobby                 : %s\n", hobi);
    printf("No. HP                : %s\n", no);
    return 0;

}
