// fichero 46969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46969;

Registro46969 crear_registro46969(int id) {
    Registro46969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46969(Registro46969 r) {
    return r.valor + r.id;
}
