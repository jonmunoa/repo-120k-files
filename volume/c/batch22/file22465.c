// fichero 22465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22465;

Registro22465 crear_registro22465(int id) {
    Registro22465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22465(Registro22465 r) {
    return r.valor + r.id;
}
