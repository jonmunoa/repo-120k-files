// fichero 18525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18525;

Registro18525 crear_registro18525(int id) {
    Registro18525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18525(Registro18525 r) {
    return r.valor + r.id;
}
