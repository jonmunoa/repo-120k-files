// fichero 39813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39813;

Registro39813 crear_registro39813(int id) {
    Registro39813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39813(Registro39813 r) {
    return r.valor + r.id;
}
