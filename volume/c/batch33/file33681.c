// fichero 33681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33681;

Registro33681 crear_registro33681(int id) {
    Registro33681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33681(Registro33681 r) {
    return r.valor + r.id;
}
