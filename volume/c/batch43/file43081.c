// fichero 43081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43081;

Registro43081 crear_registro43081(int id) {
    Registro43081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43081(Registro43081 r) {
    return r.valor + r.id;
}
