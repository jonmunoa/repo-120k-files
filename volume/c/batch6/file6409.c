// fichero 6409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6409;

Registro6409 crear_registro6409(int id) {
    Registro6409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6409(Registro6409 r) {
    return r.valor + r.id;
}
