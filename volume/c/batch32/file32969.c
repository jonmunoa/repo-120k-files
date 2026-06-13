// fichero 32969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32969;

Registro32969 crear_registro32969(int id) {
    Registro32969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32969(Registro32969 r) {
    return r.valor + r.id;
}
