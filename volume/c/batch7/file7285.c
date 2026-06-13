// fichero 7285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7285;

Registro7285 crear_registro7285(int id) {
    Registro7285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7285(Registro7285 r) {
    return r.valor + r.id;
}
