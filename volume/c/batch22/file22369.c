// fichero 22369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22369;

Registro22369 crear_registro22369(int id) {
    Registro22369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22369(Registro22369 r) {
    return r.valor + r.id;
}
