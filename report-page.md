# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Tóm tắt ngắn gọn mục tiêu của bài lab.

## 2. Cách làm
- Đọc hiểu chương trình entropy mẫu.
- Bổ sung hàm tính redundancy.
- Hoàn thiện hàm mod_inverse().
- Chạy thử trên nhiều test case.

## 3. Kết quả chính
### 3.1 Entropy và redundancy
| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | 0 | cao | dữ liệu lặp |
| abcd | 2 | thấp | phân bố đều |
| hello world | 2.8 | trung bình | pha trộn |

### 3.2 Modulo inverse
| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | -1 |

## 4. Kết luận
Hiểu cách tính entropy để đo độ ngẫu nhiên của dữ liệu
Nhận ra dữ liệu càng lặp → entropy thấp → redundancy cao
Hiểu thuật toán Euclid mở rộng để tìm nghịch đảo modulo
Khó khăn: hiểu công thức entropy và debug modular inverse
Bài giúp hiểu rõ hơn về ứng dụng trong mật mã học.
