// fichero 3021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3021;

Registro3021 crear_registro3021(int id) {
    Registro3021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3021(Registro3021 r) {
    return r.valor + r.id;
}
