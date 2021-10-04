#ifndef __ARRAY__
#define __ARRAY__

class Array{
	protected:
		int *data;				// 배열 포인터
		int len;				// 배열의 크기
	public:
			Array(int size);	// 생성자
			~Array();			// 소멸자

			int length() const;	// 배열의 크기 return

			int& operator[](int i);			// 배열에 원소를 삽입
			int operator[](int i)const;		// 배열의 원소 값 반환

			void print();		// 배열의 모든 내용 출력
};
#endif
