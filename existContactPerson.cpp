#include"existContactPerson.h"

// 判断通讯录中是否存在联系人
// 判断方法：判断通讯录当前联系人数是否为0
// 功能描述：判断通讯录中是否存在联系人，是则返回真，否则返回假
bool existContactPerson(AddressBook ab) {
	if (ab.size == 0) {
		return false;
	}
	else {
		return true;
	}
}
