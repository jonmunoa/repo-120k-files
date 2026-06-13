// fichero 49957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49957;

Registro49957 crear_registro49957(int id) {
    Registro49957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49957(Registro49957 r) {
    return r.valor + r.id;
}
