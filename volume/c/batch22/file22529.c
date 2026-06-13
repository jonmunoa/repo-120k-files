// fichero 22529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22529;

Registro22529 crear_registro22529(int id) {
    Registro22529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22529(Registro22529 r) {
    return r.valor + r.id;
}
