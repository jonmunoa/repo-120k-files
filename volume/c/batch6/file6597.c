// fichero 6597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6597;

Registro6597 crear_registro6597(int id) {
    Registro6597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6597(Registro6597 r) {
    return r.valor + r.id;
}
