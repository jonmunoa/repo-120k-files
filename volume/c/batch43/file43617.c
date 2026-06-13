// fichero 43617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43617;

Registro43617 crear_registro43617(int id) {
    Registro43617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43617(Registro43617 r) {
    return r.valor + r.id;
}
