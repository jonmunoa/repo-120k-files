// fichero 47037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47037;

Registro47037 crear_registro47037(int id) {
    Registro47037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47037(Registro47037 r) {
    return r.valor + r.id;
}
