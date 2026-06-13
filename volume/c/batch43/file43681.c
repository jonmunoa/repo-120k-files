// fichero 43681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43681;

Registro43681 crear_registro43681(int id) {
    Registro43681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43681(Registro43681 r) {
    return r.valor + r.id;
}
