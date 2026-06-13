// fichero 16681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16681;

Registro16681 crear_registro16681(int id) {
    Registro16681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16681(Registro16681 r) {
    return r.valor + r.id;
}
