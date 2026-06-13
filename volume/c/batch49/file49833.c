// fichero 49833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49833;

Registro49833 crear_registro49833(int id) {
    Registro49833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49833(Registro49833 r) {
    return r.valor + r.id;
}
