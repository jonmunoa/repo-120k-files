// fichero 42769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42769;

Registro42769 crear_registro42769(int id) {
    Registro42769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42769(Registro42769 r) {
    return r.valor + r.id;
}
