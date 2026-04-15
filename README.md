# Arduino LM35 Temp Monitor

## 1. Mô tả
Dự án đo nhiệt độ sử dụng 2 cảm biến LM35 và hiển thị dữ liệu qua Serial Monitor dưới dạng CSV.

## 2. Tính năng
- Đọc giá trị ADC từ 2 kênh A0 và A1.
- Chuyển đổi sang độ C.
- Gửi dữ liệu tốc độ cao (100ms/mẫu).

## 3. Phần cứng cần thiết
| Linh kiện | Số lượng | Ghi chú |
| :--- | :--- | :--- |
| Arduino Uno | 1 | Board mạch chính |
| Cảm biến LM35 | 2 | Cảm biến nhiệt độ |
| Dây cắm | - | Kết nối mạch |

## 4. Cách sử dụng
1. Kết nối cảm biến 1 vào chân A0, cảm biến 2 vào chân A1.
2. Nạp code `LM35_TempReader.ino`.
3. Mở Serial Monitor (Baudrate 9600).

## 5. Cấu trúc thư mục
- `firmware/`: Chứa mã nguồn Arduino.
- `README.md`: Tài liệu hướng dẫn.

## 6. Thành viên nhóm
- Phạm Hữu Tài
