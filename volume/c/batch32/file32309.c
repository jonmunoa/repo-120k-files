// fichero 32309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32309;

Registro32309 crear_registro32309(int id) {
    Registro32309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32309(Registro32309 r) {
    return r.valor + r.id;
}
