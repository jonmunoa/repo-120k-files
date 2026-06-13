// fichero 42517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42517;

Registro42517 crear_registro42517(int id) {
    Registro42517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42517(Registro42517 r) {
    return r.valor + r.id;
}
