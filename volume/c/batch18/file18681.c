// fichero 18681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18681;

Registro18681 crear_registro18681(int id) {
    Registro18681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18681(Registro18681 r) {
    return r.valor + r.id;
}
