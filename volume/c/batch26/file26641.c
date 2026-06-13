// fichero 26641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26641;

Registro26641 crear_registro26641(int id) {
    Registro26641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26641(Registro26641 r) {
    return r.valor + r.id;
}
