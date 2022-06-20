# driver-morse-raspberry
0. install các thư viện trong requirements.txt -.- chạy từng lệnh vì rasp khó pip
1. testmorse folder chứa modul driver morse encode, decode, blink led. Install:
   1.1. cd tới thư mục testmorse
   1.2. make
   1.3. sudo insmod testmorse.ko
   1.4. lsmod xem driver name đã có hay chưa (ở trên cùng)
   1.5. echo chuoi > /dev/morse (để chuyển chuỗi thành morse và blink led theo mã morse,more example: echo abc cba > /dev/morse)
   1.6. cat /dev/morse (để xem mã morse được driver trả về)
   1.7. echo morse > /dev/morse (để chuyển morse thành chuỗi, example: echo .. .-.. --- ...- . ..- > /dev/morse)
   1.8. cat /dev/morse (để xem mã rõ được trả về)
2. morse.py : encode, decode morse dùng driver  ở trên
3. pushButtonMorse.py : nhận tín hiệu morse từ button, blink led theo việc button được nhấn
4. main.py file ui
5. ps: đã kết nối lại với nhau, cài đặt trên raspbery và chạy
