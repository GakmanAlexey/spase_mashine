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
	component_liner1.push_back(0);//корпус
	component_liner1.push_back(0);//пушка1
	component_liner1.push_back(0);//пушка2
	component_liner1.push_back(0);//пушка3
	component_liner1.push_back(0);//пушка4
	component_liner1.push_back(0);//пушка5
	component_liner1.push_back(0);//пушка6
	component_liner1.push_back(0);//пушка7
	component_liner1.push_back(0);//движек
	component_liner1.push_back(0);//щит
	component_liner1.push_back(0);//Обвес(генератор)
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес
	component_liner1.push_back(0);//Обвес

	component_liner2.push_back(0);//корпус
	component_liner2.push_back(0);//пушка1
	component_liner2.push_back(0);//пушка2
	component_liner2.push_back(0);//пушка3
	component_liner2.push_back(0);//пушка4
	component_liner2.push_back(0);//пушка5
	component_liner2.push_back(0);//пушка6
	component_liner2.push_back(0);//пушка7
	component_liner2.push_back(0);//движек
	component_liner2.push_back(0);//щит
	component_liner2.push_back(0);//Обвес(генератор)
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес
	component_liner2.push_back(0);//Обвес

	component_liner3.push_back(0);//корпус
	component_liner3.push_back(0);//пушка1
	component_liner3.push_back(0);//пушка2
	component_liner3.push_back(0);//пушка3
	component_liner3.push_back(0);//пушка4
	component_liner3.push_back(0);//пушка5
	component_liner3.push_back(0);//пушка6
	component_liner3.push_back(0);//пушка7
	component_liner3.push_back(0);//движек
	component_liner3.push_back(0);//щит
	component_liner3.push_back(0);//Обвес(генератор)
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес
	component_liner3.push_back(0);//Обвес

	component_liner4.push_back(0);//корпус
	component_liner4.push_back(0);//пушка1
	component_liner4.push_back(0);//пушка2
	component_liner4.push_back(0);//пушка3
	component_liner4.push_back(0);//пушка4
	component_liner4.push_back(0);//пушка5
	component_liner4.push_back(0);//пушка6
	component_liner4.push_back(0);//пушка7
	component_liner4.push_back(0);//движек
	component_liner4.push_back(0);//щит
	component_liner4.push_back(0);//Обвес(генератор)
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес
	component_liner4.push_back(0);//Обвес

	component_liner5.push_back(0);//корпус
	component_liner5.push_back(0);//пушка1
	component_liner5.push_back(0);//пушка2
	component_liner5.push_back(0);//пушка3
	component_liner5.push_back(0);//пушка4
	component_liner5.push_back(0);//пушка5
	component_liner5.push_back(0);//пушка6
	component_liner5.push_back(0);//пушка7
	component_liner5.push_back(0);//движек
	component_liner5.push_back(0);//щит
	component_liner5.push_back(0);//Обвес(генератор)
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес
	component_liner5.push_back(0);//Обвес
};

void  Inventory::load_moduls() {
	int i = 0;
	while (i < 1000) {
		moduls_id.push_back(0);
		i++;
	}
};