// fichero 43641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43641;

Registro43641 crear_registro43641(int id) {
    Registro43641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43641(Registro43641 r) {
    return r.valor + r.id;
}
