// fichero 45681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45681;

Registro45681 crear_registro45681(int id) {
    Registro45681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45681(Registro45681 r) {
    return r.valor + r.id;
}
