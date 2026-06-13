// fichero 43657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43657;

Registro43657 crear_registro43657(int id) {
    Registro43657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43657(Registro43657 r) {
    return r.valor + r.id;
}
