// fichero 39201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39201;

Registro39201 crear_registro39201(int id) {
    Registro39201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39201(Registro39201 r) {
    return r.valor + r.id;
}
