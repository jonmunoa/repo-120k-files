// fichero 7525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7525;

Registro7525 crear_registro7525(int id) {
    Registro7525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7525(Registro7525 r) {
    return r.valor + r.id;
}
