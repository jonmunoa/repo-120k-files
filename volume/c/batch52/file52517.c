// fichero 52517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52517;

Registro52517 crear_registro52517(int id) {
    Registro52517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52517(Registro52517 r) {
    return r.valor + r.id;
}
