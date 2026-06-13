// fichero 45165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45165;

Registro45165 crear_registro45165(int id) {
    Registro45165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45165(Registro45165 r) {
    return r.valor + r.id;
}
