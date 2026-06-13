// fichero 22617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22617;

Registro22617 crear_registro22617(int id) {
    Registro22617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22617(Registro22617 r) {
    return r.valor + r.id;
}
