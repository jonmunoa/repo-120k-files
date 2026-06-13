// fichero 43029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43029;

Registro43029 crear_registro43029(int id) {
    Registro43029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43029(Registro43029 r) {
    return r.valor + r.id;
}
