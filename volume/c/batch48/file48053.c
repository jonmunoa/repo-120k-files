// fichero 48053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48053;

Registro48053 crear_registro48053(int id) {
    Registro48053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48053(Registro48053 r) {
    return r.valor + r.id;
}
