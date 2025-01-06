# 운전자 졸음 탐지와 졸음 환경 감지 서비스

---

### 프로젝트 동기
<img src = 'images/1.png'>
<br/>

### 프로젝트 수행 도구
<img src = 'images/프로젝트 수행도구.png'>
<br/>

---

### 프로젝트 진행

#### object detection model
<img src = 'images/object detection model.png'>
<br/>

#### labeling
- CVAT 사이트를 이용하여 다음과 같이 사진들에 labeling 처리
<img src = 'images/labeling.png'>
<br/>

#### wandb 학습내역 - YOLOV5
<img src = 'images/wandb.png'>
<br/>

#### 아두이노 회로
<img src = 'images/아두이노.png'>
<br/>

#### 졸음확률 예측
  1. 졸음이 유발되는 환경 조사
  <img src = 'images/졸음확률 예측.png'>
  <br/>
  
  2. 머신러닝을 위한 환경 데이터 수집 및 전처리
  <img src = 'images/졸음확률 예측2.png'>
  <br/>
  
  3. 선형회귀(Logistic)을 이용한 졸음확률 예측
  <img src = 'images/졸음확률 예측3.png'>
  <br/>

---

#### 서비스 구조
<img src = 'images/서비스구조.png'>
<br/>

#### 데이터 흐름
<img src = 'images/데이터흐름.png'>
<img src = 'images/데이터흐름2.png'>
<br/>

#### 웹 페이지
<img src = 'images/웹페이지지.png'>
<br/>

---

#### 시연영상
https://www.youtube.com/watch?v=tKGQWqB1VyQ&feature=youtu.be

---

프로젝트 진행상황

1 - 딥러닝(Face Object Detection) 모델 정하기  == 완료 <br>
2 - Wabcam에서 예측된 label Database 전송  ==  완료<br>
3 - 예측된 값이 3초동안 close일 경우 아두이노 시리얼 통신 == 완료<br>
4 - 추가) 이전 접속과 현재 접속 문제 == 완료<br>
5 - MYSQL 원격 접속 == 완료<br>
6 - 추가) 아두이노 시리얼 통신, DB 연결 == 완료<br>
7 - 추가) 아두이노 온습도, 이산화탄소, 조도센서 연결 및 DB 데이터 전송(다른 테이블) == 완료 <br> 
8 - 장고 MYSQL 모델(명세) 작성 == 완료<br> 
9 - 온습도, 이산화탄소 졸음 예측 모델 생성 == 완료<br>
10 - DJANGO 그래프, 각 지표 SCALAR 값 표시 == 완료<br>
11 - DJANGO FRONTEND == 완료<br>
