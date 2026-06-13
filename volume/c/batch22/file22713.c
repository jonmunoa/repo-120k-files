// fichero 22713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22713;

Registro22713 crear_registro22713(int id) {
    Registro22713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22713(Registro22713 r) {
    return r.valor + r.id;
}
