// fichero 46437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46437;

Registro46437 crear_registro46437(int id) {
    Registro46437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46437(Registro46437 r) {
    return r.valor + r.id;
}
