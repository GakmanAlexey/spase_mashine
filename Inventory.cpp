#include "Inventory.h"

void Inventory::load() {
	load_resourse();
	load_liners();
	load_moduls();
};
void Inventory::load_resourse() {
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
	resourse_name.push_back("���1");
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
	component_liner1.push_back(0);//������
	component_liner1.push_back(0);//�����1
	component_liner1.push_back(0);//�����2
	component_liner1.push_back(0);//�����3
	component_liner1.push_back(0);//�����4
	component_liner1.push_back(0);//�����5
	component_liner1.push_back(0);//�����6
	component_liner1.push_back(0);//�����7
	component_liner1.push_back(0);//������
	component_liner1.push_back(0);//���
	component_liner1.push_back(0);//�����(���������)
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����
	component_liner1.push_back(0);//�����

	component_liner2.push_back(0);//������
	component_liner2.push_back(0);//�����1
	component_liner2.push_back(0);//�����2
	component_liner2.push_back(0);//�����3
	component_liner2.push_back(0);//�����4
	component_liner2.push_back(0);//�����5
	component_liner2.push_back(0);//�����6
	component_liner2.push_back(0);//�����7
	component_liner2.push_back(0);//������
	component_liner2.push_back(0);//���
	component_liner2.push_back(0);//�����(���������)
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����
	component_liner2.push_back(0);//�����

	component_liner3.push_back(0);//������
	component_liner3.push_back(0);//�����1
	component_liner3.push_back(0);//�����2
	component_liner3.push_back(0);//�����3
	component_liner3.push_back(0);//�����4
	component_liner3.push_back(0);//�����5
	component_liner3.push_back(0);//�����6
	component_liner3.push_back(0);//�����7
	component_liner3.push_back(0);//������
	component_liner3.push_back(0);//���
	component_liner3.push_back(0);//�����(���������)
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����
	component_liner3.push_back(0);//�����

	component_liner4.push_back(0);//������
	component_liner4.push_back(0);//�����1
	component_liner4.push_back(0);//�����2
	component_liner4.push_back(0);//�����3
	component_liner4.push_back(0);//�����4
	component_liner4.push_back(0);//�����5
	component_liner4.push_back(0);//�����6
	component_liner4.push_back(0);//�����7
	component_liner4.push_back(0);//������
	component_liner4.push_back(0);//���
	component_liner4.push_back(0);//�����(���������)
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����
	component_liner4.push_back(0);//�����

	component_liner5.push_back(0);//������
	component_liner5.push_back(0);//�����1
	component_liner5.push_back(0);//�����2
	component_liner5.push_back(0);//�����3
	component_liner5.push_back(0);//�����4
	component_liner5.push_back(0);//�����5
	component_liner5.push_back(0);//�����6
	component_liner5.push_back(0);//�����7
	component_liner5.push_back(0);//������
	component_liner5.push_back(0);//���
	component_liner5.push_back(0);//�����(���������)
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����
	component_liner5.push_back(0);//�����
};

void  Inventory::load_moduls() {
	int i = 0;
	while (i < 1000) {
		moduls_id.push_back(0);
		i++;
	}
};