// fichero 34681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34681;

Registro34681 crear_registro34681(int id) {
    Registro34681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34681(Registro34681 r) {
    return r.valor + r.id;
}
