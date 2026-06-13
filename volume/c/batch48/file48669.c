// fichero 48669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48669;

Registro48669 crear_registro48669(int id) {
    Registro48669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48669(Registro48669 r) {
    return r.valor + r.id;
}
