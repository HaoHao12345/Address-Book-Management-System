#include"isExistContactPerson.h"

// 判断通讯录中是否存在某特定联系人功能
// 若存在返回该联系人下标，若不存在返回-1
int isExistContactPerson(AddressBook ab, string name) {
	for (int i = 0; i < ab.size; i++) {
		// 找到用户输入的姓名了
		if (ab.person[i].name == name) {
			return i; // 如果找到，返回这个人在数组中的下标
		}
	}
	return -1; // 如果遍历结束都未找到，返回-1
}
