// fichero 7681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7681;

Registro7681 crear_registro7681(int id) {
    Registro7681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7681(Registro7681 r) {
    return r.valor + r.id;
}
