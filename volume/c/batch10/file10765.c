// fichero 10765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10765;

Registro10765 crear_registro10765(int id) {
    Registro10765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10765(Registro10765 r) {
    return r.valor + r.id;
}
