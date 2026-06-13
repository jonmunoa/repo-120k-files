// fichero 13085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13085;

Registro13085 crear_registro13085(int id) {
    Registro13085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13085(Registro13085 r) {
    return r.valor + r.id;
}
