// fichero 7401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7401;

Registro7401 crear_registro7401(int id) {
    Registro7401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7401(Registro7401 r) {
    return r.valor + r.id;
}
