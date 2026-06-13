// fichero 7033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7033;

Registro7033 crear_registro7033(int id) {
    Registro7033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7033(Registro7033 r) {
    return r.valor + r.id;
}
