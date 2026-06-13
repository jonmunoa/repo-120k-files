// fichero 4949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4949;

Registro4949 crear_registro4949(int id) {
    Registro4949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4949(Registro4949 r) {
    return r.valor + r.id;
}
