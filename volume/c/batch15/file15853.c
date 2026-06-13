// fichero 15853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15853;

Registro15853 crear_registro15853(int id) {
    Registro15853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15853(Registro15853 r) {
    return r.valor + r.id;
}
