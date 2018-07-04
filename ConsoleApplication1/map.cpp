#include "stdafx.h"
#include "map.h"

char& GradeMap::operator[](const std::string& name)
{
	for (auto &elem : m_map)
	{
		if (elem.name == name)
			return elem.grade;
	}
	
	m_map.push_back({name, ' '});
	return m_map.back().grade;
}