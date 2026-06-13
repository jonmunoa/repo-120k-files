// fichero 32681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32681;

Registro32681 crear_registro32681(int id) {
    Registro32681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32681(Registro32681 r) {
    return r.valor + r.id;
}
