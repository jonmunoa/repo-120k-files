// fichero 22657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22657;

Registro22657 crear_registro22657(int id) {
    Registro22657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22657(Registro22657 r) {
    return r.valor + r.id;
}
