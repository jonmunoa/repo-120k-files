// fichero 43693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43693;

Registro43693 crear_registro43693(int id) {
    Registro43693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43693(Registro43693 r) {
    return r.valor + r.id;
}
