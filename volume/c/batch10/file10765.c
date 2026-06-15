// fichero 10765 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10765;

Registro10765 crear_registro10765(int id) {
    Registro10765 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
