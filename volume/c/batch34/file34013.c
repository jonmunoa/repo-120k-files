// fichero 34013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34013;

Registro34013 crear_registro34013(int id) {
    Registro34013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34013(Registro34013 r) {
    return r.valor + r.id;
}
