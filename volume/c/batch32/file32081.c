// fichero 32081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32081;

Registro32081 crear_registro32081(int id) {
    Registro32081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32081(Registro32081 r) {
    return r.valor + r.id;
}
