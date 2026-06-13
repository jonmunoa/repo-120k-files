// fichero 48541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48541;

Registro48541 crear_registro48541(int id) {
    Registro48541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48541(Registro48541 r) {
    return r.valor + r.id;
}
