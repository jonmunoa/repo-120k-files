// fichero 7189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7189;

Registro7189 crear_registro7189(int id) {
    Registro7189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7189(Registro7189 r) {
    return r.valor + r.id;
}
