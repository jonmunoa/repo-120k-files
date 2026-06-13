// fichero 47321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47321;

Registro47321 crear_registro47321(int id) {
    Registro47321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47321(Registro47321 r) {
    return r.valor + r.id;
}
