// fichero 47733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47733;

Registro47733 crear_registro47733(int id) {
    Registro47733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47733(Registro47733 r) {
    return r.valor + r.id;
}
