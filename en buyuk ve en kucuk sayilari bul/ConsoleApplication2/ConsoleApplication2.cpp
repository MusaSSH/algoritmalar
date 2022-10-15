#include <iostream>

int main()
{
    int sayiAdedi = 0;
    int32_t enBuyuk = -2147483648;
    int32_t enKucuk = 2147483647;

    std::cout << "Kac sayi girmek istersiniz?" << std::endl;
    std::cin >> sayiAdedi;

    int* sayilar = new int[sayiAdedi];

    for (int i = 0; i < sayiAdedi; i++) {
        std::cout << i + 1 << ". sayiyi giriniz." << std::endl;
        std::cin >> sayilar[i];
    }

    for (int i = 0; i < sayiAdedi; i++) {
        if (enBuyuk < sayilar[i]) {
            enBuyuk = sayilar[i];
        }

        if (enKucuk > sayilar[i]) {
            enKucuk = sayilar[i];
        }
    }

    std::cout << "En buyuk sayi " << enBuyuk << std::endl;
    std::cout << "En kucuk sayi " << enKucuk << std::endl;
}