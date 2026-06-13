// fichero 26549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26549;

Registro26549 crear_registro26549(int id) {
    Registro26549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26549(Registro26549 r) {
    return r.valor + r.id;
}
