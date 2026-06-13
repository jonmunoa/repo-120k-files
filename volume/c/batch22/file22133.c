// fichero 22133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22133;

Registro22133 crear_registro22133(int id) {
    Registro22133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22133(Registro22133 r) {
    return r.valor + r.id;
}
