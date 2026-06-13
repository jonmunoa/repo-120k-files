// fichero 46821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46821;

Registro46821 crear_registro46821(int id) {
    Registro46821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46821(Registro46821 r) {
    return r.valor + r.id;
}
