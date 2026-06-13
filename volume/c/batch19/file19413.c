// fichero 19413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19413;

Registro19413 crear_registro19413(int id) {
    Registro19413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19413(Registro19413 r) {
    return r.valor + r.id;
}
