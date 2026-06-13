// fichero 32301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32301;

Registro32301 crear_registro32301(int id) {
    Registro32301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32301(Registro32301 r) {
    return r.valor + r.id;
}
