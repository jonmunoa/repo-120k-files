// fichero 43505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43505;

Registro43505 crear_registro43505(int id) {
    Registro43505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43505(Registro43505 r) {
    return r.valor + r.id;
}
