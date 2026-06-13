// fichero 22801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22801;

Registro22801 crear_registro22801(int id) {
    Registro22801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22801(Registro22801 r) {
    return r.valor + r.id;
}
