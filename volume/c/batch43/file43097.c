// fichero 43097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43097;

Registro43097 crear_registro43097(int id) {
    Registro43097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43097(Registro43097 r) {
    return r.valor + r.id;
}
