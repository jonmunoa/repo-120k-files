// fichero 22661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22661;

Registro22661 crear_registro22661(int id) {
    Registro22661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22661(Registro22661 r) {
    return r.valor + r.id;
}
