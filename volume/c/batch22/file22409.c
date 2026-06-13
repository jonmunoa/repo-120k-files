// fichero 22409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22409;

Registro22409 crear_registro22409(int id) {
    Registro22409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22409(Registro22409 r) {
    return r.valor + r.id;
}
