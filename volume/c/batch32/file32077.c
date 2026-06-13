// fichero 32077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32077;

Registro32077 crear_registro32077(int id) {
    Registro32077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32077(Registro32077 r) {
    return r.valor + r.id;
}
