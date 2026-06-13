// fichero 45881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45881;

Registro45881 crear_registro45881(int id) {
    Registro45881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45881(Registro45881 r) {
    return r.valor + r.id;
}
