// fichero 45017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45017;

Registro45017 crear_registro45017(int id) {
    Registro45017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45017(Registro45017 r) {
    return r.valor + r.id;
}
