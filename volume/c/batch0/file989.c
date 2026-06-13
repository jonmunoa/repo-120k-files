// fichero 989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro989;

Registro989 crear_registro989(int id) {
    Registro989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro989(Registro989 r) {
    return r.valor + r.id;
}
