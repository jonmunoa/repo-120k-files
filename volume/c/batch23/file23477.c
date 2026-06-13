// fichero 23477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23477;

Registro23477 crear_registro23477(int id) {
    Registro23477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23477(Registro23477 r) {
    return r.valor + r.id;
}
