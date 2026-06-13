// fichero 22581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22581;

Registro22581 crear_registro22581(int id) {
    Registro22581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22581(Registro22581 r) {
    return r.valor + r.id;
}
