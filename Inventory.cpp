#include "Inventory.h"

void Inventory::load() {
	load_resourse();
	load_liners();
	load_moduls();
};
void Inventory::load_resourse() {
	resourse_name.push_back("���1");
	resourse_name.push_back("���2");
	resourse_name.push_back("���3");
	resourse_name.push_back("���4");
	resourse_name.push_back("���5");
	resourse_name.push_back("���6");
	resourse_name.push_back("���7");
	resourse_name.push_back("���8");
	resourse_name.push_back("���9");
	resourse_name.push_back("���10");
	resourse_name.push_back("���11");
	resourse_name.push_back("���12");
	resourse_name.push_back("���13");
	resourse_name.push_back("���14");
	resourse_name.push_back("���15");
	resourse_name.push_back("���16");
	resourse_name.push_back("���17");
	resourse_name.push_back("���18");
	resourse_name.push_back("���19");
	resourse_name.push_back("���20");
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
	resourse_count.push_back(0);
};
void Inventory::load_liners() {
	component_liner1.push_back(1);//������
	component_liner1.push_back(14);//�����1
	component_liner1.push_back(15);//�����2
	component_liner1.push_back(19);//�����3
	component_liner1.push_back(18);//�����4
	component_liner1.push_back(12);//�����5
	component_liner1.push_back(13);//�����6
	component_liner1.push_back(14);//�����7
	component_liner1.push_back(15);//������
	component_liner1.push_back(11);//���
	component_liner1.push_back(11);//�����(���������)
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����

	component_liner2.push_back(2);//������
	component_liner2.push_back(11);//�����1
	component_liner2.push_back(13);//�����2
	component_liner2.push_back(11);//�����3
	component_liner2.push_back(11);//�����4
	component_liner2.push_back(13);//�����5
	component_liner2.push_back(11);//�����6
	component_liner2.push_back(14);//�����7
	component_liner2.push_back(11);//������
	component_liner2.push_back(11);//���
	component_liner2.push_back(0);//�����(���������)
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����

	component_liner3.push_back(3);//������
	component_liner3.push_back(11);//�����1
	component_liner3.push_back(17);//�����2
	component_liner3.push_back(17);//�����3
	component_liner3.push_back(11);//�����4
	component_liner3.push_back(15);//�����5
	component_liner3.push_back(15);//�����6
	component_liner3.push_back(11);//�����7
	component_liner3.push_back(17);//������
	component_liner3.push_back(11);//���
	component_liner3.push_back(11);//�����(���������)
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����

	component_liner4.push_back(4);//������
	component_liner4.push_back(17);//�����1
	component_liner4.push_back(17);//�����2
	component_liner4.push_back(15);//�����3
	component_liner4.push_back(15);//�����4
	component_liner4.push_back(11);//�����5
	component_liner4.push_back(13);//�����6
	component_liner4.push_back(13);//�����7
	component_liner4.push_back(11);//������
	component_liner4.push_back(11);//���
	component_liner4.push_back(11);//�����(���������)
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����

	component_liner5.push_back(5);//������
	component_liner5.push_back(17);//�����1
	component_liner5.push_back(17);//�����2
	component_liner5.push_back(15);//�����3
	component_liner5.push_back(15);//�����4
	component_liner5.push_back(11);//�����5
	component_liner5.push_back(13);//�����6
	component_liner5.push_back(13);//�����7
	component_liner5.push_back(11);//������
	component_liner5.push_back(0);//���
	component_liner5.push_back(0);//�����(���������)
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����

	liner_list.push_back(1);//��� ������
	liner_list.push_back(3);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
	liner_list.push_back(5);//��� ������
};

void  Inventory::load_moduls() {
	int i = 0;
	while (i < 1000) {
		moduls_id.push_back(11);
		i++;
	}
};