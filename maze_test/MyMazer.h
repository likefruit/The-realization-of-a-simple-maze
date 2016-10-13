#pragma once
/*
* �ļ����ƣ�MyMazer.H
* �ļ����ܣ�����MyMazer��
*/

/*
* �����ƣ�MyMazer
* �๦�ܣ�MazePerson��Ĵ����࣬�����������Թ��е���
*/

#ifndef MyMazer_H_
#define MyMazer_H_


class MazePerson;                     //�����Թ����˵���

									  /*enum objectiveDirections
									  {
									  SOUTH,NORTH,WEST,EAST         //��(��)����(��)����(��)����(��)
									  };*/


#include "Public.H"
class MyMazer
{

public:
	MyMazer();										                       //�����˵���Ĺ��췽����Ĭ�ϳ�ʼ���˵�λ��
	MyMazer(int currentX, int currentY);								   //�����˵���Ĺ��췽�����趨�˵ĳ�ʼ��λ��
	MyMazer(int currentX, int currentY, objectiveDirections myForward);    //�����˵���Ĺ��췽�����趨�˵ĳ�ʼ��λ�úͷ��򣬷���ʹ������ֵ:SOUTH,NORTH,WEST,EAST
	~MyMazer();															   //�����˵������������
	MyMazer &setPersonPosition(int coordinateX, int coordinateY);          //�����趨�˵�λ�õķ���
	MyMazer &setPersonChar(char personChar);                               //�����趨�˵ı�ʾ�ķ���
	MyMazer &setPersonForward(objectiveDirections myForward);              //�����趨�˵ķ���ķ���������ʹ������ֵ:SOUTH,NORTH,WEST,EAST 
	void setPersonPos(int coordX, int coordY);							   //�����趨�˵ı�ʾ�ķ���
	void setPersonPic(char personChar);									   //�����趨�˵ı�ʾ�ķ���
	void setPersonForwardDirection(objectiveDirections myForward);		   //�����趨�˵ķ���ķ���
	void setPersonSpeed(long speed);                                       //���������˵�ǰ�ٶȵķ�����ֱ��ʹ������
	void setPersonSpeed(int speed);                                        //���������˵�ǰ�ٶȵķ�����ʹ���趨��ֵ:FAST,MIDD,SLOW
	void start();                                                          //�����˿�ʼ�˶��ķ���

private:
	MazePerson *mazePerson;												   //�����˵����ָ��
};

#endif //MyMazer_H_
