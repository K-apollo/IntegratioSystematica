#include <stdio.h>
#include <stdlib.h>
#include "cSystemCQ.h"

int main() {
    // cSystemCQ 인스턴스 생성
    cSystemCQ* my_system = create_cSystemCQ();
    if (!my_system) {
        fprintf(stderr, "Failed to create cSystemCQ instance.\n");
        return 1;
    }

    // 값 설정 및 출력
    my_system->set_id(my_system, 101);
    my_system->set_name(my_system, "Control System");

    printf("System ID: %d\n", my_system->get_id(my_system));
    printf("System Name: %s\n", my_system->get_name(my_system));

    // 메모리 해제
    free(my_system);

    return 0;
}