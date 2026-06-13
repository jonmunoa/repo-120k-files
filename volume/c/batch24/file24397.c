// fichero 24397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24397;

Registro24397 crear_registro24397(int id) {
    Registro24397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24397(Registro24397 r) {
    return r.valor + r.id;
}
