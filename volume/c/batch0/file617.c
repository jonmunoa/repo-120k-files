// fichero 617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro617;

Registro617 crear_registro617(int id) {
    Registro617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro617(Registro617 r) {
    return r.valor + r.id;
}
