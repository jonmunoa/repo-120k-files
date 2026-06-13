// fichero 48461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48461;

Registro48461 crear_registro48461(int id) {
    Registro48461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48461(Registro48461 r) {
    return r.valor + r.id;
}
