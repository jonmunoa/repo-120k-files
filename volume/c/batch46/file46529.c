// fichero 46529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46529;

Registro46529 crear_registro46529(int id) {
    Registro46529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46529(Registro46529 r) {
    return r.valor + r.id;
}
