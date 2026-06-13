// fichero 43733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43733;

Registro43733 crear_registro43733(int id) {
    Registro43733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43733(Registro43733 r) {
    return r.valor + r.id;
}
