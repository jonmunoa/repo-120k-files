// fichero 28969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28969;

Registro28969 crear_registro28969(int id) {
    Registro28969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28969(Registro28969 r) {
    return r.valor + r.id;
}
