/*
* �ļ����ƣ�MyMazeMap.H
* �ļ����ܣ��ṩ�ù���ͼ�����������
*/

/*
* �����ƣ�MyMazeMap
* �๦�ܣ�MazeMap�Ĵ����࣬��װMazeMap��
* �����б���
*
*/

#ifndef MymazeMap_H_
#define MymazeMap_H_




class MazeMap;              //��������������

class MyMazeMap
{
public:
	MyMazeMap();			                             //����MyMazeMap�Ĺ��췽��
														 //���캯����ʹ���û��Զ���ĵ�ͼ��
														 //*mazeMap ��ͼ��ά�����׵�ַ��row ��ͼ�����е�������column ��ͼ�����е�����
	MyMazeMap(int *mazeMap, int row, int column);
	~MyMazeMap();			                             //����MyMazeMap����������
	void setMazeWall(char wall);                         //���ñ�ʾǽ���ַ�
	void setMazeRoad(char road);					     //���ñ�ʾ·���ַ�
	void defaultMode();                                  //�����Թ���Ĭ�ϵ�ͼ
	void setMazeMap(int *mazeMap, int row, int column);    //���������Թ���ͼ
	void drawMap() const;                                //���������Թ���ͼ�ĺ���

private:
	MazeMap *mazeMap;       //�������������͵�ָ��
};

#endif //MymazeMap_H_