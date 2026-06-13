// fichero 45989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45989;

Registro45989 crear_registro45989(int id) {
    Registro45989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45989(Registro45989 r) {
    return r.valor + r.id;
}
