// fichero 15681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15681;

Registro15681 crear_registro15681(int id) {
    Registro15681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15681(Registro15681 r) {
    return r.valor + r.id;
}
