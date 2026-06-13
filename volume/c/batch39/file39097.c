// fichero 39097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39097;

Registro39097 crear_registro39097(int id) {
    Registro39097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39097(Registro39097 r) {
    return r.valor + r.id;
}
