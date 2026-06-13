// fichero 6561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6561;

Registro6561 crear_registro6561(int id) {
    Registro6561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6561(Registro6561 r) {
    return r.valor + r.id;
}
