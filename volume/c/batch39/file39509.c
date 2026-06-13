// fichero 39509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39509;

Registro39509 crear_registro39509(int id) {
    Registro39509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39509(Registro39509 r) {
    return r.valor + r.id;
}
