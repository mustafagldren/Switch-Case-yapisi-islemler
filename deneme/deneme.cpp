/*Switch Case yapısıyla iki tane değişken atıyoruz. Sonra 1,2,3,4 ekrana yansıtıp hangi islemin "1,2,3,4" seçiminde
yapılacağını gösteren bir yapı. Verilen rakamlardan başka bir sayı girilirse "Hatali giris" diye uyarı verecek.
4 secildiğinde olası bir küsüratlı sonuc icin (float) komutu eklenmiştir.*/

#include <iostream>
using namespace std;

int main()
{
    int islem, x, y;
    cout << "1.sayiyi giriniz :";
    cin >> x;
    cout << "2. sayiyi giriniz :";
    cin >> y;

    cout << "Bir İslem seciniz ? \n";
    cout << "1 Toplama : \n";
    cout << "2 Cikarma : \n";
    cout << "3 Carpma : \n";
    cout << "4 Bolme : \n";
    cin >> islem;

    switch (islem) {

    case 1: cout << "Sayilarin toplami" << x + y << endl;
        break;
    case 2: cout << "Sayilarin farki" <<  x - y << endl;
        break;
    case 3: cout << "Sayilarin carpimi" <<  x * y << endl;
        break;
    case 4:  cout << "Sayilarin bolumu " << (float) x / y << endl;
        break;

    default: cout << "Hatali Giris. \n" << endl;
    }
    system("pause");
    return 0;

}
