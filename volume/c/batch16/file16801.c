// fichero 16801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16801;

Registro16801 crear_registro16801(int id) {
    Registro16801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16801(Registro16801 r) {
    return r.valor + r.id;
}
