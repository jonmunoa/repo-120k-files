// fichero 1681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1681;

Registro1681 crear_registro1681(int id) {
    Registro1681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1681(Registro1681 r) {
    return r.valor + r.id;
}
