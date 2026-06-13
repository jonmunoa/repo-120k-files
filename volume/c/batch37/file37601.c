// fichero 37601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37601;

Registro37601 crear_registro37601(int id) {
    Registro37601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37601(Registro37601 r) {
    return r.valor + r.id;
}
