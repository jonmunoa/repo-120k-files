// fichero 30157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30157;

Registro30157 crear_registro30157(int id) {
    Registro30157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30157(Registro30157 r) {
    return r.valor + r.id;
}
