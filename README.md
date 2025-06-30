# iot-network-2025

## 1일차 

### 초기 환경 세팅
#### VMware 다운로드
- https://www.vmware.com/products/desktop-hypervisor/workstation-and-fusion
- BROADCOM 계정만들기
- Free Downloads 에서 VMware Workstation Pro 선택
    - VMware Workstation Pro 17.0 for windows 17.6.3 다운 (가장 최신)
- 가상 머신으로 다운로드 한 Ubuntu 파일 선택

#### Ubuntu 다운로드
- https://ubuntu.com/download/desktop
- Ubuntu 24.04.2 LTS -> Intel or AMD 64-bit architecture 다운로드
- Ubuntu 실행 후 계정 만들기

#### putty 다운로드
- https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html
- Package files -> MSI 64pit x86 다운로드
- 실행 후 Host Name에 Ubuntu의 ip주소 입력
- Sessions명 ubuntu 입력 후 save
- Saved Sessions의 ubuntu 선택 후 Load 클릭 후 Open
- Ubuntu의 계정 아이디와 비밀번호 입력

#### LINUX 기본 문법
- ls : 현재 위치에 있는 문서, 디렉토리 출력
    - -l : 상세한 출력
- pwd : 현재 위치
    - .. : 부모 위치
- cd : 해당 위치 이동
- mkdir : 새로운 디렉토리 생성
- rm : 디렉토리, 파일 제거
- touch : 간단한 빈 파일 생성
- cat : 간단한 파일 출력
- nano : 파일 수정
- chmod : 권한 변경


#### 네트워크 
- 소켓 생성 : socket()
- 소켓 주소 할당 : bind()
- 연결 요청 대기 : listen()
- 연결 허용 : accept()
- 데이터 송/수신 : read/write()
- 종료 : close()

#### 인터넷 주소 체계
- IPv4 인터넷 주소의 체계
    - 클래스 A : 네트워크ID(1) + 호스트 ID(3)   0 ~ 127(0)
    - 클래스 B : 네트워크ID(2) + 호스트 ID(2)   128 ~ 191(10)
    - 클래스 C : 네트워크ID(3) + 호스트 ID(1)   192 ~ 223(110)
    - 클래스 D 

#### 프로토콜 체계
- PF_INET : IPv4 인터넷 프로토콜 체계
- PF_INET6 : IPv6 인터넷 프로토콜 체계

#### 소켓의 타입(전송방식)
- TCP(연결지향형 소켓) : SOCK_STREAM
- UDP(비연결지향형 소켓) : SOCK_DGRAM