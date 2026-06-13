// fichero 42157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42157;

Registro42157 crear_registro42157(int id) {
    Registro42157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42157(Registro42157 r) {
    return r.valor + r.id;
}
