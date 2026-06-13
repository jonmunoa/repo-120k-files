// fichero 11681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11681;

Registro11681 crear_registro11681(int id) {
    Registro11681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11681(Registro11681 r) {
    return r.valor + r.id;
}
