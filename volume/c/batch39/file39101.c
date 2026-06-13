// fichero 39101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39101;

Registro39101 crear_registro39101(int id) {
    Registro39101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39101(Registro39101 r) {
    return r.valor + r.id;
}
