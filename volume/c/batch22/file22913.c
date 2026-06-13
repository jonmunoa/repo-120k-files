// fichero 22913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22913;

Registro22913 crear_registro22913(int id) {
    Registro22913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22913(Registro22913 r) {
    return r.valor + r.id;
}
