// fichero 24537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24537;

Registro24537 crear_registro24537(int id) {
    Registro24537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24537(Registro24537 r) {
    return r.valor + r.id;
}
