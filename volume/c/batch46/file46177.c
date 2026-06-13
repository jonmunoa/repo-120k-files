// fichero 46177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46177;

Registro46177 crear_registro46177(int id) {
    Registro46177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46177(Registro46177 r) {
    return r.valor + r.id;
}
