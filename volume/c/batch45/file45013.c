// fichero 45013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45013;

Registro45013 crear_registro45013(int id) {
    Registro45013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45013(Registro45013 r) {
    return r.valor + r.id;
}
