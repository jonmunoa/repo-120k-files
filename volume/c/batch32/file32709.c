// fichero 32709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32709;

Registro32709 crear_registro32709(int id) {
    Registro32709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32709(Registro32709 r) {
    return r.valor + r.id;
}
