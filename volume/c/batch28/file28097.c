// fichero 28097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28097;

Registro28097 crear_registro28097(int id) {
    Registro28097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28097(Registro28097 r) {
    return r.valor + r.id;
}
