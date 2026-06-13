// fichero 14265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14265;

Registro14265 crear_registro14265(int id) {
    Registro14265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14265(Registro14265 r) {
    return r.valor + r.id;
}
