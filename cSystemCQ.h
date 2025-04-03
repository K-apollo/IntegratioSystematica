#ifndef CSYSTEMCQ_H
#define CSYSTEMCQ_H

typedef struct  // cSystemCQ 구조체 정의
{
    int id;  // 시스템 ID
    char name[50];  // 시스템 이름
    void (*set_id)(struct cSystemCQ* self, int new_id);  // ID 설정 함수
    void (*set_name)(struct cSystemCQ* self, const char* new_name);  // 이름 설정 함수
    int (*get_id)(struct cSystemCQ* self);  // ID 가져오기 함수
    const char* (*get_name)(struct cSystemCQ* self);  // 이름 가져오기 함수
} cSystemCQ;

cSystemCQ* create_cSystemCQ();  // cSystemCQ 생성 함수 선언

#endif // CSYSTEMCQ_H
