#include"deleteContactPerson.h"
#include"isExistContactPerson.h"

// 删除联系人功能
// 删除的方法：与删除数组中特定元素的方法相同
//             从待删除的下标开始，每个元素往前移动
//			   数组长度-1
// 功能描述：提供待删除联系人姓名，将此人删除；若不存在此人则给出相应提示
void deleteContactPerson(AddressBook* ab) {
	string name;
	cout << "请输入待删除的联系人姓名：";
	cin >> name;
	// 判断是否存在该联系人
	int ret = isExistContactPerson(*ab,name);
	if (ret == -1) { // 未查到该联系人
		cout << "不存在该联系人！" << endl;
		return; // 退出函数
	}
	else { // 查到该联系人
		for (int i = ret; i < ab->size; i++) {
			// 从待删除位置开始，数据前移
			ab->person[i] = ab->person[i + 1];
		}
		ab->size--; // 通讯录中数组长度-1
	}

	cout << "删除成功！" << endl;

	system("pause"); // 暂停代码执行，按任意键继续

	system("cls"); // 清屏


}
