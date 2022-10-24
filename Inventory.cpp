#include "Inventory.h"

void Inventory::load() {
	load_resourse();
	load_liners();
	load_moduls();
};
void Inventory::load_resourse() {
	resourse_name.push_back("рес1");
	resourse_name.push_back("Рес2");
	resourse_name.push_back("Рес3");
	resourse_name.push_back("Рес4");
	resourse_name.push_back("Рес5");
	resourse_name.push_back("Рес6");
	resourse_name.push_back("Рес7");
	resourse_name.push_back("Рес8");
	resourse_name.push_back("Рес9");
	resourse_name.push_back("Рес10");
	resourse_name.push_back("Рес11");
	resourse_name.push_back("Рес12");
	resourse_name.push_back("Рес13");
	resourse_name.push_back("Рес14");
	resourse_name.push_back("Рес15");
	resourse_name.push_back("Рес16");
	resourse_name.push_back("Рес17");
	resourse_name.push_back("Рес18");
	resourse_name.push_back("Рес19");
	resourse_name.push_back("Рес20");
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
	component_liner1.push_back(1);//корпус
	component_liner1.push_back(14);//пушка1
	component_liner1.push_back(15);//пушка2
	component_liner1.push_back(19);//пушка3
	component_liner1.push_back(18);//пушка4
	component_liner1.push_back(12);//пушка5
	component_liner1.push_back(13);//пушка6
	component_liner1.push_back(14);//пушка7
	component_liner1.push_back(15);//движек
	component_liner1.push_back(11);//щит
	component_liner1.push_back(11);//Обвес(генератор)
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес

	component_liner2.push_back(2);//корпус
	component_liner2.push_back(11);//пушка1
	component_liner2.push_back(13);//пушка2
	component_liner2.push_back(11);//пушка3
	component_liner2.push_back(11);//пушка4
	component_liner2.push_back(13);//пушка5
	component_liner2.push_back(11);//пушка6
	component_liner2.push_back(14);//пушка7
	component_liner2.push_back(11);//движек
	component_liner2.push_back(11);//щит
	component_liner2.push_back(0);//Обвес(генератор)
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес

	component_liner3.push_back(3);//корпус
	component_liner3.push_back(11);//пушка1
	component_liner3.push_back(17);//пушка2
	component_liner3.push_back(17);//пушка3
	component_liner3.push_back(11);//пушка4
	component_liner3.push_back(15);//пушка5
	component_liner3.push_back(15);//пушка6
	component_liner3.push_back(11);//пушка7
	component_liner3.push_back(17);//движек
	component_liner3.push_back(11);//щит
	component_liner3.push_back(11);//Обвес(генератор)
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес

	component_liner4.push_back(4);//корпус
	component_liner4.push_back(17);//пушка1
	component_liner4.push_back(17);//пушка2
	component_liner4.push_back(15);//пушка3
	component_liner4.push_back(15);//пушка4
	component_liner4.push_back(11);//пушка5
	component_liner4.push_back(13);//пушка6
	component_liner4.push_back(13);//пушка7
	component_liner4.push_back(11);//движек
	component_liner4.push_back(11);//щит
	component_liner4.push_back(11);//Обвес(генератор)
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес

	component_liner5.push_back(5);//корпус
	component_liner5.push_back(17);//пушка1
	component_liner5.push_back(17);//пушка2
	component_liner5.push_back(15);//пушка3
	component_liner5.push_back(15);//пушка4
	component_liner5.push_back(11);//пушка5
	component_liner5.push_back(13);//пушка6
	component_liner5.push_back(13);//пушка7
	component_liner5.push_back(11);//движек
	component_liner5.push_back(0);//щит
	component_liner5.push_back(0);//Обвес(генератор)
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес

	liner_list.push_back(1);//Доп лайнер
	liner_list.push_back(3);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
	liner_list.push_back(5);//Доп лайнер
};

void  Inventory::load_moduls() {
	int i = 0;
	while (i < 1000) {
		moduls_id.push_back(11);
		i++;
	}
};