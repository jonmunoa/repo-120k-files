// fichero 45173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45173;

Registro45173 crear_registro45173(int id) {
    Registro45173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45173(Registro45173 r) {
    return r.valor + r.id;
}
