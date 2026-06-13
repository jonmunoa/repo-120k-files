// fichero 43645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43645;

Registro43645 crear_registro43645(int id) {
    Registro43645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43645(Registro43645 r) {
    return r.valor + r.id;
}
