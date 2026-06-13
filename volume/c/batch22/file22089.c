// fichero 22089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22089;

Registro22089 crear_registro22089(int id) {
    Registro22089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22089(Registro22089 r) {
    return r.valor + r.id;
}
