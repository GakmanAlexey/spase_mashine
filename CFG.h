#pragma once
#include <string>
class CFG
{
	/*
	����������:
	s - start
	w - width
	h - height
	*/
public:
	bool debug = true; //����� ������

	bool pre_windows = true;// ��������� �� �������������� ����
	int pre_windows_width = 256;//������ ���������������� ����
	int pre_windows_height = 256;//������ ���������������� ����

	int windows_width = 1280; // ������ ��������� ����
	int windows_height = 720; // ������ ��������� ����
	std::string project_name = "����������� ����������� by RedLava";

	int s_rend_w = 0; //����� ������ ��������� �� ������
	int s_rend_h = 0; //����� ������ ��������� �� ������


	//����������
	std::string direct_root = "resurse/";
	std::string direct_font = "font/";
	std::string direct_img = "img/";
};

