#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cSystemCQ.h"

// 내부 함수 정의
static void set_id(cSystemCQ* self, int new_id) {
    self->id = new_id;
}

static void set_name(cSystemCQ* self, const char* new_name) {
    strncpy(self->name, new_name, sizeof(self->name) - 1);
    self->name[sizeof(self->name) - 1] = '\0';  // 문자열 종료 보장
}

static int get_id(cSystemCQ* self) {
    return self->id;
}

static const char* get_name(cSystemCQ* self) {
    return self->name;
}

// cSystemCQ 생성 함수 구현
cSystemCQ* create_cSystemCQ() {
    cSystemCQ* instance = (cSystemCQ*)malloc(sizeof(cSystemCQ));
    if (instance) {
        instance->id = 0;  // 초기 ID 값
        instance->name[0] = '\0';  // 초기 이름 값
        instance->set_id = set_id;
        instance->set_name = set_name;
        instance->get_id = get_id;
        instance->get_name = get_name;
    }
    return instance;
}