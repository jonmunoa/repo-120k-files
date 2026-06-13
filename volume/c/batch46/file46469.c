// fichero 46469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46469;

Registro46469 crear_registro46469(int id) {
    Registro46469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46469(Registro46469 r) {
    return r.valor + r.id;
}
