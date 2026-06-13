// fichero 24617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24617;

Registro24617 crear_registro24617(int id) {
    Registro24617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24617(Registro24617 r) {
    return r.valor + r.id;
}
