// fichero 22433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22433;

Registro22433 crear_registro22433(int id) {
    Registro22433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22433(Registro22433 r) {
    return r.valor + r.id;
}
