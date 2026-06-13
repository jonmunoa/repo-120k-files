// fichero 45033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45033;

Registro45033 crear_registro45033(int id) {
    Registro45033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45033(Registro45033 r) {
    return r.valor + r.id;
}
