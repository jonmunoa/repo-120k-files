// fichero 39937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39937;

Registro39937 crear_registro39937(int id) {
    Registro39937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39937(Registro39937 r) {
    return r.valor + r.id;
}
