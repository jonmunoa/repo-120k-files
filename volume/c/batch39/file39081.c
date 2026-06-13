// fichero 39081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39081;

Registro39081 crear_registro39081(int id) {
    Registro39081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39081(Registro39081 r) {
    return r.valor + r.id;
}
