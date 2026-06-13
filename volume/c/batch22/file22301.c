// fichero 22301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22301;

Registro22301 crear_registro22301(int id) {
    Registro22301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22301(Registro22301 r) {
    return r.valor + r.id;
}
