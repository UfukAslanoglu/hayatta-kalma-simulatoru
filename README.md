# 🌲 Hayatta Kalma Simülatörü

Bu proje, C programlama dili kullanılarak geliştirilmiş, metin tabanlı (terminal üzerinden oynanan) bir hayatta kalma oyunudur. Oyuncunun sınırlı kaynaklarla hayatta kalmak için stratejik kararlar vermesi gerekir.

## 🚀 Proje Hakkında
Bu simülasyon, temel programlama mantığını (döngüler, karar yapıları, rastgele sayı üretimi) pekiştirmek amacıyla hazırlanmıştır. Oyunda sağlık, enerji ve yemek gibi değişkenleri dengede tutarak hayatta kalmaya çalışırsınız.

### 🕹️ Komutlar ve Özellikler
Oyunda kullanabileceğiniz temel aksiyonlar:
* **A (Avlan):** Yemek bulma şansı sağlar ama enerji tüketir.
* **S (Sığınak Ara):** Geceyi güvende geçirmek için sığınak bulmanızı sağlar.
* **R (Dinlen):** Enerji ve sağlık kazanmanıza yardımcı olur (sığınaktaysanız daha etkilidir).
* **E (Envanter):** Güncel durumunuzu (sağlık, enerji, yemek) kontrol etmenizi sağlar.
* **F (Tehlike Dalgası):** Ardışık tehlikelere karşı dayanıklılığınızı test eder.
* **P (Şifreli Geçiş):** Bir kapıyı açmak için doğru şifreyi bulmanız gereken mini oyun.

## 🛠️ Teknik Detaylar
Kod içerisinde aşağıdaki C yapıları kullanılmıştır:
- `switch-case` ile komut kontrolü.
- `do-while` ve `for` döngüleri.
- `rand()` fonksiyonu ile şans faktörü.
- Standart giriş/çıkış işlemleri (`stdio.h`).

## 💻 Nasıl Çalıştırılır?
1. Kod dosyasını indirin: `hayatta_kalma.c`
2. Bir C derleyicisi (örneğin GCC) ile derleyin:
   ```bash
   gcc hayatta_kalma.c -o hayatta_kalma
