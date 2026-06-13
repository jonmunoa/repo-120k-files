// fichero 46961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46961;

Registro46961 crear_registro46961(int id) {
    Registro46961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46961(Registro46961 r) {
    return r.valor + r.id;
}
