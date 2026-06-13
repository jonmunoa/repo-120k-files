// fichero 39325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39325;

Registro39325 crear_registro39325(int id) {
    Registro39325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39325(Registro39325 r) {
    return r.valor + r.id;
}
