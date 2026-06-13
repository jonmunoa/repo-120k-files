// fichero 5285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5285;

Registro5285 crear_registro5285(int id) {
    Registro5285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5285(Registro5285 r) {
    return r.valor + r.id;
}
