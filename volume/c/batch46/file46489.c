// fichero 46489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46489;

Registro46489 crear_registro46489(int id) {
    Registro46489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46489(Registro46489 r) {
    return r.valor + r.id;
}
