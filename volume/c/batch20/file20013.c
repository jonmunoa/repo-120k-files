// fichero 20013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20013;

Registro20013 crear_registro20013(int id) {
    Registro20013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20013(Registro20013 r) {
    return r.valor + r.id;
}
