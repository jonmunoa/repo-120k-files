// fichero 49989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49989;

Registro49989 crear_registro49989(int id) {
    Registro49989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49989(Registro49989 r) {
    return r.valor + r.id;
}
