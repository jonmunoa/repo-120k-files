// fichero 7321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7321;

Registro7321 crear_registro7321(int id) {
    Registro7321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7321(Registro7321 r) {
    return r.valor + r.id;
}
