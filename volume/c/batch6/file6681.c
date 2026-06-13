// fichero 6681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6681;

Registro6681 crear_registro6681(int id) {
    Registro6681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6681(Registro6681 r) {
    return r.valor + r.id;
}
