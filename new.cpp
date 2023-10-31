#include <iostream>
using namespace std;

void utama(){
    cout << "Selamat Datang Di Toko Komputer Jaya" <<endl;
    cout << "Daftar Merk Yang Dijual Di Toko Kami : " <<endl;
    cout << "1. Logitech" <<endl;
    cout << "2. ROG" <<endl;
    cout << "3. Rexus" <<endl;
    cout << "4. Fantech" <<endl;
    cout << "5. Razer" <<endl;
    cout << endl;
}

void daftar_logitech() {
    cout << "Daftar Produk Merk Logitech" <<endl;
    cout << "1.Logitech G102 Mouse Gaming      - Rp 270.000 " <<endl;
    cout << "2.Logitech G213 Prodigy Keyboard  - Rp 669.000 " <<endl;
    cout << "3.Logitech F310 Gamepad           - Rp 279.000 " <<endl;
    cout << "4.Logitech G333 Earphone          - Rp 559.000 " <<endl;
    cout << "5.Logitech G331 Headset Gaming    - Rp 629.000 " <<endl;
    cout << endl;
}

int total_logitech(int item, int jumlah) {
    int harga = 0;
    if (item == 1) {
        harga = 270000;
    } else if (item == 2) {
        harga = 669000;
    } else if (item == 3) {
        harga = 279000;
    } else if (item == 4) {
        harga = 559000;
    } else if (item == 5) {
        harga = 629000;
    } else {
        cout << "Produk tidak valid" <<endl;
        return 0;
    }
    int total = harga * jumlah;
    return total;
}

void daftar_rog() {
    cout << "Daftar Produk Merk ROG" <<endl;
    cout << "1.ASUS ROG Zephyrus G14 Laptop           - Rp 14.999.000 " <<endl;
    cout << "2.ASUS ROG Strix Graphics Card RTX 3080  - Rp 7.900.000 " <<endl;
    cout << "3.ASUS ROG B760 Gaming Motherboard       - Rp 3.100.000 " <<endl;
    cout << "4.ASUS ROG VG27AQ3A Gaming Monitor       - Rp 3.700.000 " <<endl;
    cout << "5.ASUS ROG Azoth Gaming Keyboard         - Rp 3.900.000 " <<endl;
    cout << endl;
}

int total_rog(int item, int jumlah) {
    int harga = 0;
    if (item == 1) {
        harga = 14999000;
    } else if (item == 2) {
        harga = 7900000;
    } else if (item == 3) {
        harga = 3100000;
    } else if (item == 4) {
        harga = 3700000;
    } else if (item == 5) {
        harga = 3900000;
    } else {
        cout << "Produk tidak valid" <<endl;
        return 0;
    }
    int total = harga * jumlah;
    return total;
}

void daftar_rexus() {
    cout << "Daftar Produk Merk Rexus" <<endl;
    cout << "1.Rexus Heroic XK3 Gaming Keyboard  - Rp 260.000 " <<endl;
    cout << "2.Rexus Shaga RX130 Mouse Gaming    - Rp 365.000 " <<endl;
    cout << "3.Rexus Gamepad Gladius GX300       - Rp 350.000 " <<endl;
    cout << "4.Rexus Daxa Retro Gaming Mousepad  - Rp 135.000 " <<endl;
    cout << "5.Rexus KB-01 Dual Keyboard         - Rp 185.000 " <<endl;
    cout << endl;
}

int total_rexus(int item, int jumlah) {
    int harga = 0;
    if (item == 1) {
        harga = 260000;
    } else if (item == 2) {
        harga = 365000;
    } else if (item == 3) {
        harga = 350000;
    } else if (item == 4) {
        harga = 135000;
    } else if (item == 5) {
        harga = 185000;
    } else {
        cout << "Produk tidak valid" <<endl;
        return 0;
    }
    int total = harga * jumlah;
    return total;

}

void daftar_fantech() {
    cout << "Daftar Produk Merk Fantech" <<endl;
    cout << "1.Fantech Raigor Gen III Mouse          - Rp 75.000 " <<endl;
    cout << "2.Fantech Venom II WGC2 Mouse Gaming    - Rp 170.000 " <<endl;
    cout << "3.Fantech ATOM96 MK890 Keyboard Gaming  - Rp 260.000  " <<endl;
    cout << "4.Fantech TWS Earphone Buds TX2         - Rp 380.000 " <<endl;
    cout << "5.Fantech Portal HG28 Headset Gaming    - Rp 170.000 " <<endl;
    cout << endl;
}

int total_fantech(int item, int jumlah) {
    int harga = 0;
    if (item == 1) {
        harga = 75000;
    } else if (item == 2) {
        harga = 170000;
    } else if (item == 3) {
        harga = 260000;
    } else if (item == 4) {
        harga = 380000;
    } else if (item == 5) {
        harga = 170000;
    } else {
        cout << "Produk tidak valid" <<endl;
        return 0;
    }
    int total = harga * jumlah;
    return total;
}

void daftar_razer() {
    cout << "Daftar Produk Merk Razer" <<endl;
    cout << "1.Razer DeathAdder Gaming Mouse  - Rp 260.000 " <<endl;
    cout << "2.Razer BlackShark V2            - Rp 600.000 " <<endl;
    cout << "3.Razer Basililk V3              - Rp 2.000.000 " <<endl;
    cout << "4.Razer Steam Deck               - Rp 2.800.000 " <<endl;
    cout << "5.Razer Gigantus V2              - Rp 530.000 " <<endl;
    cout << endl;
}

int total_razer(int item, int jumlah) {
    int harga = 0;
    if (item == 1) {
        harga = 260000;
    } else if (item == 2) {
        harga = 600000;
    } else if (item == 3) {
        harga = 2000000;
    } else if (item == 4) {
        harga = 2800000;
    } else if (item == 5) {
        harga = 530000;
    } else {
        cout << "Produk tidak valid" <<endl;
        return 0;
    }
    int total = harga * jumlah;
    return total;
}

void cekPilMenuLogitech(int item){
    switch(item){
    case 1:
        cout << "Anda memilih Logitech G102 Mouse Gaming      - Rp 270.000 " <<endl;
        break;
    case 2:
        cout << "Anda memilih Logitech G213 Prodigy Keyboard  - Rp 669.000 " <<endl;
        break;
    case 3:
        cout << "Anda memilih Logitech F310 Gamepad           - Rp 279.000 " <<endl;
        break;
    case 4:
        cout << "Anda memilih Logitech G333 Earphone          - Rp 559.000 " <<endl;
        break;
    case 5:
        cout << "Anda memilih Logitech G331 Headset Gaming    - Rp 629.000 " <<endl;
        break;
    }
}

void cekPilMenuRog(int item){
    switch(item){
    case 1:
        cout << "Anda memilih ASUS ROG Zephyrus G14 Laptop           - Rp 14.999.000 " <<endl;
        break;
    case 2:
        cout << "Anda memilih ASUS ROG Strix Graphics Card RTX 3080  - Rp 7.900.000 " <<endl;
        break;
    case 3:
        cout << "Anda memilih ASUS ROG B760 Gaming Motherboard       - Rp 3.100.000 " <<endl;
        break;
    case 4:
        cout << "Anda memilih ASUS ROG VG27AQ3A Gaming Monitor       - Rp 3.700.000 " <<endl;
        break;
    case 5:
        cout << "Anda memilih ASUS ROG Azoth Gaming Keyboard         - Rp 3.900.000 " <<endl;
        break;
    }
}

void cekPilMenuRexus(int item){
    switch(item){
    case 1:
        cout << "Anda memilih Rexus Heroic XK3 Gaming Keyboard  - Rp 260.000 " <<endl;
        break;
    case 2:
        cout << "Anda memilih Rexus Shaga RX130 Mouse Gaming    - Rp 365.000 " <<endl;
        break;
    case 3:
        cout << "Anda memilih Rexus Gamepad Gladius GX300       - Rp 350.000 " <<endl;
        break;
    case 4:
        cout << "Anda memilih Rexus Daxa Retro Gaming Mousepad  - Rp 135.000 " <<endl;
        break;
    case 5:
        cout << "Anda memilih Rexus KB-01 Dual Keyboard         - Rp 185.000 " <<endl;
        break;
    }
}

void cekPilMenuFantech(int item){
    switch(item){
    case 1:
        cout << "Anda memilih Fantech Raigor Gen III Mouse          - Rp 75.000 " <<endl;
        break;
    case 2:
        cout << "Anda memilih Fantech Venom II WGC2 Mouse Gaming    - Rp 170.000 " <<endl;
        break;
    case 3:
        cout << "Anda memilih Fantech ATOM96 MK890 Keyboard Gaming  - Rp 260.000 " <<endl;
        break;
    case 4:
        cout << "Anda memilih Fantech TWS Earphone Buds TX2         - Rp 380.000 " <<endl;
        break;
    case 5:
        cout << "Anda memilih Fantech Portal HG28 Headset Gaming    - Rp 170.000 " <<endl;
        break;
    }
}

void cekPilMenuRazer(int item){
    switch(item){
    case 1:
        cout << "Anda memilih Razer DeathAdder Gaming Mouse  - Rp 260.000 " <<endl;
        break;
    case 2:
        cout << "Anda memilih Razer BlackShark V2            - Rp 600.000 " <<endl;
        break;
    case 3:
        cout << "Anda memilih Razer Basililk V3              - Rp 2.000.000 " <<endl;
        break;
    case 4:
        cout << "Anda memilih Razer Steam Deck               - Rp 2.800.000 " <<endl;
        break;
    case 5:
        cout << "Anda memilih Razer Gigantus V2              - Rp 530.000 " <<endl;
        break;
    }
}


int main () {
    int pil_merk;
    int total_pembelian = 0;
    int item, jumlah;
    char pil;

    system("CLS");
    utama();
    cout << "Input Merk Yang Anda Pilih : ";
    cin >> pil_merk;

    if (pil_merk == 1) {
        daftar_logitech();
        cout << "Input Nomor Produk Akan Anda Beli : ";
        cin >> item;
        cekPilMenuLogitech(item);

        if (item < 1 || item > 5) {
            cout << "Produk Tidak Valid" <<endl;
            return 0;
        }

        cout << "Jumlah produk yang akan anda beli : ";
        cin >> jumlah;
        cout <<endl;

        if (jumlah < 1) {
        cout << "Jumlah tidak valid" <<endl;
        return 0;
        }

        int total = total_logitech(item, jumlah);
        if (total > 0) {
        cout << "Total Harga : Rp " <<total <<endl;
        total_pembelian += total;
        }

        cout << "Total Belanja Anda : Rp " <<total_pembelian <<endl;
        cout <<endl;

        cout << "Apakah ingin membeli produk lain (y/t) : ";
        cin >> pil;

        if (pil == 'y' || pil == 'Y') {
        return main();
        }

        cout << "Terimakasih sudah belanja di toko Komputer Jaya" <<endl;
        cout << "Selamat datang kembali" <<endl;
    }

    else if (pil_merk == 2) {
        daftar_rog();
        cout << "Input Nomor Produk Akan Anda Beli : ";
        cin >> item;
        cekPilMenuRog(item);

        if (item < 1 || item > 5) {
            cout << "Produk Tidak Valid" <<endl;
            return 0;
        }

        cout << "Jumlah produk yang akan anda beli : ";
        cin >> jumlah;
        cout <<endl;

        if (jumlah < 1) {
        cout << "Jumlah tidak valid" <<endl;
        return 0;
        }

        int total = total_rog(item, jumlah);
        if (total > 0) {
        cout << "Total Harga : Rp " <<total <<endl;
        total_pembelian += total;
        }

        cout << "Total Belanja Anda : Rp " <<total_pembelian <<endl;
        cout <<endl;

        cout << "Apakah ingin membeli produk lain (y/t) : ";
        cin >> pil;

        if (pil == 'y' || pil == 'Y') {
        return main();
        }

        cout << "Terimakasih sudah belanja di toko Komputer Jaya" <<endl;
        cout << "Selamat datang kembali" <<endl;
    }
    else if (pil_merk == 3) {
        daftar_rexus();
        cout << "Input Nomor Produk Akan Anda Beli : ";
        cin >> item;
        cekPilMenuRexus(item);

        if (item < 1 || item > 5) {
            cout << "Produk Tidak Valid" <<endl;
            return 0;
        }

        cout << "Jumlah produk yang akan anda beli : ";
        cin >> jumlah;
        cout <<endl;

        if (jumlah < 1) {
        cout << "Jumlah tidak valid" <<endl;
        return 0;
        }

        int total = total_rexus(item, jumlah);
        if (total > 0) {
        cout << "Total Harga : Rp " <<total <<endl;
        total_pembelian += total;
        }

        cout << "Total Belanja Anda : Rp " <<total_pembelian <<endl;
        cout <<endl;

        cout << "Apakah ingin membeli produk lain (y/t) : ";
        cin >> pil;

        if (pil == 'y' || pil == 'Y') {
        return main();
        }

        cout << "Terimakasih sudah belanja di toko Komputer Jaya" <<endl;
        cout << "Selamat datang kembali" <<endl;
    }
    else if (pil_merk == 4) {
        daftar_fantech();
        cout << "Input Nomor Produk Akan Anda Beli : ";
        cin >> item;
        cekPilMenuFantech(item);

        if (item < 1 || item > 5) {
            cout << "Produk Tidak Valid" <<endl;
            return 0;
        }

        cout << "Jumlah produk yang akan anda beli : ";
        cin >> jumlah;
        cout <<endl;

        if (jumlah < 1) {
        cout << "Jumlah tidak valid" <<endl;
        return 0;
        }

        int total = total_fantech(item, jumlah);
        if (total > 0) {
        cout << "Total Harga : Rp " <<total <<endl;
        total_pembelian += total;
        }

        cout << "Total Belanja Anda : Rp " <<total_pembelian <<endl;
        cout <<endl;

        cout << "Apakah ingin membeli produk lain (y/t) : ";
        cin >> pil;

        if (pil == 'y' || pil == 'Y') {
        return main();
        }

        cout << "Terimakasih sudah belanja di toko Komputer Jaya" <<endl;
        cout << "Selamat datang kembali" <<endl;
    }
    else if (pil_merk == 5) {
        daftar_razer();
        cout << "Input Nomor Produk Akan Anda Beli : ";
        cin >> item;
        cekPilMenuRazer(item);

        if (item < 1 || item > 5) {
            cout << "Produk Tidak Valid" <<endl;
            return 0;
        }

        cout << "Jumlah produk yang akan anda beli : ";
        cin >> jumlah;
        cout <<endl;

        if (jumlah < 1) {
        cout << "Jumlah tidak valid" <<endl;
        return 0;
        }

        int total = total_razer(item, jumlah);
        if (total > 0) {
        cout << "Total Harga : Rp " <<total <<endl;
        total_pembelian += total;
        }

        cout << "Total Belanja Anda : Rp " <<total_pembelian <<endl;
        cout <<endl;

        cout << "Apakah ingin membeli produk lain (y/t) : ";
        cin >> pil;

        if (pil == 'y' || pil == 'Y') {
        return main();
        }

        cout << "Terimakasih sudah belanja di toko Komputer Jaya" <<endl;
        cout << "Selamat datang kembali" <<endl;
    }
    else {
        cout << "Pilihan Tidak Valid" <<endl;
    }
return 0;
}







