#include"xiling_npc.h"
#include"xiling_jineng.h"
#include"xiling_wupin.h"


std::string xiling_npc::showall() {
	std::string a;
	a =  m_chenghao + m_name + 
		"\n����ֵ��" + tostring(m_health) + "/" + tostring(m_healthmax) +
		"\n����ֵ��" + tostring(m_magic) + "/" + tostring(m_magicmax) +
		"\n������" + tostring<int>(tili()) + " ����" + tostring<int>(jingshen()) +
		"\n������" + tostring<int>(m_liliang) + " ������" + tostring<int>(m_zhili) +
		"\n�������" + tostring(m_jinbi) +
		"\n���ܣ�";
	for (int i = 0; i < jinengbiao.size(); i++) {
		a += jinengbiao[i]->m_name+" ";
	}

	a += "\n״̬��";
	for (auto value : this->buff) {
		switch (value) {
		case die:a += "������";
			break;
		case alive:a += "ǿ���Դ���У�";
			break;
		case hunshui:a += "��˯��";
			break;
		case daliwan:a += "�������";
			break;
		case xuruo:a += "������";
			break;
		case meihuo_acceptance:a += "�Ȼ�";
			break;
		case meihuo_attack:
			break;
		case yinluan:a += "yin�ң�";
			break;
		case xuanyun:a += "ѣ�Σ�";
			break;
		case zhongdu:a += "�ж���";
			break;
		case bulaobusi:a += "���ϲ�����";
			break;
		default:a += "[δ֪״̬]";
			break;
		}
	}

	return a;
}

std::string xiling_npc::showName()
{
	std::string a;
	a = m_chenghao + m_name + "\n" + m_show;

	return a;
}

std::string xiling_npc::showFalse()
{
	std::string a;
	a = m_chenghao + m_name +
		"\n����ֵ��???/???\n����ֵ��???/???\n������???  ����???\n������???  ������???\n�������???\n���ܣ�???";
	a += "\n״̬��";
	for (auto value : this->buff) {
		switch (value) {
		case die:a += "������";
			break;
		case alive:a += "ǿ���Դ���У�";
			break;
		case hunshui:a += "��˯��";
			break;
		case daliwan:a += "�������";
			break;
		case xuruo:a += "������";
			break;
		case meihuo_acceptance:a += "�Ȼ�";
			break;
		case meihuo_attack:
			break;
		case yinluan:a += "yin�ң�";
			break;
		case xuanyun:a += "ѣ�Σ�";
			break;
		case zhongdu:a += "�ж���";
			break;
		case bulaobusi:a += "���ϲ�����";
			break;
		default:a += "[δ֪״̬]";
			break;
		}
	}
	a += "\n���ʧ�ܣ����жԹ�ϵʱ��ǿ����顣";

	return a;
}
