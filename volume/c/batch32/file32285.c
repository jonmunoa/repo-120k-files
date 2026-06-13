// fichero 32285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32285;

Registro32285 crear_registro32285(int id) {
    Registro32285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32285(Registro32285 r) {
    return r.valor + r.id;
}
