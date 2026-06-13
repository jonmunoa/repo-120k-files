// fichero 46681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46681;

Registro46681 crear_registro46681(int id) {
    Registro46681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46681(Registro46681 r) {
    return r.valor + r.id;
}
