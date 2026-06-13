// fichero 6517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6517;

Registro6517 crear_registro6517(int id) {
    Registro6517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6517(Registro6517 r) {
    return r.valor + r.id;
}
