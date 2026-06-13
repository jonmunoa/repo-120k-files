// fichero 22145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22145;

Registro22145 crear_registro22145(int id) {
    Registro22145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22145(Registro22145 r) {
    return r.valor + r.id;
}
