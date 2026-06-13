// fichero 45309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45309;

Registro45309 crear_registro45309(int id) {
    Registro45309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45309(Registro45309 r) {
    return r.valor + r.id;
}
