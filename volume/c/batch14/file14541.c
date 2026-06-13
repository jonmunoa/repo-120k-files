// fichero 14541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14541;

Registro14541 crear_registro14541(int id) {
    Registro14541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14541(Registro14541 r) {
    return r.valor + r.id;
}
