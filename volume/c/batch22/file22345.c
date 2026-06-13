// fichero 22345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22345;

Registro22345 crear_registro22345(int id) {
    Registro22345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22345(Registro22345 r) {
    return r.valor + r.id;
}
