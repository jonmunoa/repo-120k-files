// fichero 43541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43541;

Registro43541 crear_registro43541(int id) {
    Registro43541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43541(Registro43541 r) {
    return r.valor + r.id;
}
