// fichero 6921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6921;

Registro6921 crear_registro6921(int id) {
    Registro6921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6921(Registro6921 r) {
    return r.valor + r.id;
}
