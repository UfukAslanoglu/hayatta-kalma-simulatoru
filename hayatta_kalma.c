// Rastgeleliği başlat
srand(time(NULL));

// Durum değişkenleri
int saglik = 100;
int enerji = 100;
int yemek = 1;
int siginak = 0;
char komut;

printf("\n=== HAYATTA KALMA SIMULATORU ===\n");
printf("Komutlar:\n");
printf("A - Avlan\n");
printf("S - Siginak ara\n");
printf("E - Envanteri görüntüle\n");
printf("R - Dinlen\n");
printf("F - Tehlike dalgası (for döngüsü)\n");
printf("P - Sifreli geçiş (do-while)\n");
printf("X - Çıkış\n\n");

do {
    printf("\nKomut girin: ");
    scanf(" %c", &komut);   // boşluk karakteri tampon hatasını önler

    switch (komut) {

    // ===================== AVLAN ======================
    case 'A': {
        printf("\n>> Avlanıyorsun...\n");

        enerji -= 15;
        if (enerji < 0) enerji = 0;

        int sans = rand() % 100;

        if (sans < 50) {
            yemek++;
            printf("Yemek buldun! (%50)\n");
        }
        else if (sans < 70) {
            saglik -= 10;
            if (saglik < 0) saglik = 0;
            printf("Yaralandın! (%20)\n");
        }
        else {
            printf("Hiçbir şey bulamadın.\n");
        }
        break;
    }

    // ===================== SIĞINAK ARAMA ======================
    case 'S': {
        printf("\n>> Sığınak arıyorsun...\n");

        int durum = rand() % 100;

        if (durum < 40) {
            siginak = 1;
            printf("Bir sığınak buldun! (%40)\n");
        }
        else if (durum < 70) {
            printf("Yakında bir şey var ama tam sığınak değil.\n");
        }
        else {
            printf("Hiçbir şey bulamadın.\n");
        }
        break;
    }

    // ===================== ENVANTER ======================
    case 'E':
        printf("\n=== Envanter ===\n");
        printf("Sağlık: %d\n", saglik);
        printf("Enerji: %d\n", enerji);
        printf("Yemek: %d\n", yemek);
        printf("Sığınak: %s\n", siginak ? "Var" : "Yok");
        break;

    // ===================== DİNLENME ======================
    case 'R':
        printf("\n>> Dinleniyorsun...\n");
        if (siginak) {
            enerji += 20;
            saglik += 10;
            printf("Sığınakta olduğun için daha iyi dinlendin.\n");
        } else {
            enerji += 10;
        }
        if (enerji > 100) enerji = 100;
        if (saglik > 100) saglik = 100;
        break;

    // ===================== TEHLİKE DALGASI ======================
    case 'F': {
        printf("\n>> Tehlike dalgası geliyor!\n");

        for (int i = 1; i <= 5; i++) {
            printf("%d. tehlike!\n", i);

            int olay = rand() % 3;

            if (olay == 0) {
                saglik -= 5;
                printf("Hafif yara aldın!\n");
            }
            else if (olay == 1) {
                enerji -= 5;
                printf("Enerji kaybettin!\n");
            }
            else {
                printf("Kaçmayı başardın!\n");
            }

            if (saglik <= 0) {
                printf("Sağlığın bitti. Öldün.\n");
                return 0;
            }
        }
        break;
    }

    // ===================== ŞİFRELİ GEÇİŞ ======================
    case 'P': {
        printf("\n>> Şifreli kapıdasın. Doğru karakteri gir.\n");

        char giris;
        char sifre = 'K';

        do {
            printf("Şifre (ipucu: K): ");
            scanf(" %c", &giris);
        } while (giris != sifre);

        printf("Kapı açıldı!\n");
        break;
    }

    // ===================== ÇIKIŞ ======================
    case 'X':
        printf("\nOyundan çıkılıyor...\n");
        break;

    default:
        printf("\nGeçersiz komut!\n");
    }

    // Ölüm kontrolleri
    if (saglik <= 0) {
        printf("\nSağlığın bitti. Öldün.\n");
        break;
    }
    if (enerji <= 0) {
        printf("\nEnerjin bitti. Öldün.\n");
        break;
    }

} while (komut != 'X');

return 0;
