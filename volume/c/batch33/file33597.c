// fichero 33597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33597;

Registro33597 crear_registro33597(int id) {
    Registro33597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33597(Registro33597 r) {
    return r.valor + r.id;
}
