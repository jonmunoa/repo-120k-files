// fichero 43945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43945;

Registro43945 crear_registro43945(int id) {
    Registro43945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43945(Registro43945 r) {
    return r.valor + r.id;
}
