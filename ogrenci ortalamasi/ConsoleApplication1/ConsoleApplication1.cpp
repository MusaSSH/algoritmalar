// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int ogrenciSayisi = 0;
    int toplamNot = 0;

    std::cout << "Ogrenci sayisini girin" << std::endl;
    std::cin >> ogrenciSayisi;
    // std::cout << "DEBUG: Ogrenci sayisi " << ogrenciSayisi << " olarak belirlendi." << std::endl;

    int *notlar = new int[ogrenciSayisi];

    std::cout << "Sirasiyla ogrencilerin notlarini giriniz." << std::endl;

    for (int i = 0; i < ogrenciSayisi; i++) {
        std::cout << i + 1 << ". ogrencinin notunu giriniz." << std::endl;
        std::cin >> notlar[i];
        // std::cout << "DEBUG: " << i + 1 << ". ogrencinin notu " << notlar[i] << " olarak girildi." << std::endl;
    }

    for (int i = 0; i < ogrenciSayisi; i++) {
        toplamNot += notlar[i];
        // std::cout << "DEBUG: " << i + 1 << ". ogrencinin notu toplam nota eklendi." << std::endl;
    }

    // std::cout << "DEBUG: " << ogrenciSayisi << " ogrencinin toplam notu " << toplamNot << std::endl;

    std::cout << ogrenciSayisi << " ogrencinin not ortalamasi:" << (float) toplamNot / (float) ogrenciSayisi << std::endl;
}