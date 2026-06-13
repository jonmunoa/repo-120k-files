// fichero 2681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2681;

Registro2681 crear_registro2681(int id) {
    Registro2681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2681(Registro2681 r) {
    return r.valor + r.id;
}
