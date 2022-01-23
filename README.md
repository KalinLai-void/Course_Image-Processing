## 大學課程－「影像處理實務」之作業
These are the homeworks of the course "Image Processing Implementation" in my college.

### 環境
- VS 2019
- **NO OpenCV**
- C++ CLR (.Net Framework)

### 說明
更詳細的資料可看每個專案裡面的word檔，那是當時繳作業時給助教的檔案，其中裡面有演示流程及主要程式碼。

1. Transfer color image to gray-level image. (彩色轉灰階)
2. Image merging and Scaling. (影像合成與縮放)
	1. 將兩圖片重疊，並設定顯示比例
	2. 影像縮放
		- Zero-Order
		- First-Order
		- Bilinear-Interpolation
3. Histogram Equaliztion (直方圖均衡化)
	- 整張處理
	- 局部處理（可自訂遮罩大小）
4. Noise and Smoothing Filters (雜訊與平滑濾波器)
	- 增加雜訊（Noise）
		- Gaussian Noise
		- Uniform Noise
		- Impulse Noise (Salt-and-Pepper Noise)
	- 平滑濾波器（濾雜訊，效果可重複疊加）
		- Spatial Lowpass Filter
		- Median Filter
		- Alpha-Trimmed Mean Filte
5. Sharpening Filter (銳化濾波器，影像增強)
	- High-Pass Filter
	- High-Boost-Filter
6. Derivative Filter (邊緣偵測)
	- Prewitt Operator
	- Sobel Operator
	- Laplacian Filter
7. Image Transform (影像轉換)
	- DCT & IDCT
	- General Wavelet Form (小波轉換)