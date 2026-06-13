// fichero 22113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22113;

Registro22113 crear_registro22113(int id) {
    Registro22113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22113(Registro22113 r) {
    return r.valor + r.id;
}
