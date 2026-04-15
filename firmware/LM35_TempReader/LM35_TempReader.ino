// Khai báo các chân cảm biến
const int pinA0 = A0;
const int pinA1 = A1;
const int pinA2 = A2; // Thêm dòng này cho kênh A2

// Biến lưu giá trị nhiệt độ
float temp0, temp1, temp2;
void setup() {
  Serial.begin(9600);
  pinMode(pinA0, INPUT);
  pinMode(pinA1, INPUT);
  pinMode(pinA2, INPUT); // Thêm cấu hình cho kênh A2
}
void loop() {
  // Đọc giá trị từ 3 kênh
  temp0 = (analogRead(pinA0) * 5.0 / 1023.0) * 100.0;
  temp1 = (analogRead(pinA1) * 5.0 / 1023.0) * 100.0;
  temp2 = (analogRead(pinA2) * 5.0 / 1023.0) * 100.0; // Đọc thêm kênh A2

  // Gửi dữ liệu lên PC (định dạng JSON để app C# dễ xử lý)
  Serial.print("{ \"A0\": "); Serial.print(temp0);
  Serial.print(", \"A1\": "); Serial.print(temp1);
  Serial.print(", \"A2\": "); Serial.print(temp2); // Gửi thêm dữ liệu A2
  Serial.println(" }");

  delay(1000); // Đợi 1 giây trước khi đọc lần tiếp theo
}