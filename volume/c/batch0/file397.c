// fichero 397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro397;

Registro397 crear_registro397(int id) {
    Registro397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro397(Registro397 r) {
    return r.valor + r.id;
}
