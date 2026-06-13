// fichero 20037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20037;

Registro20037 crear_registro20037(int id) {
    Registro20037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20037(Registro20037 r) {
    return r.valor + r.id;
}
