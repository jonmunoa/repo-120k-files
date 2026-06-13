// fichero 42521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42521;

Registro42521 crear_registro42521(int id) {
    Registro42521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42521(Registro42521 r) {
    return r.valor + r.id;
}
