// fichero 26605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26605;

Registro26605 crear_registro26605(int id) {
    Registro26605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26605(Registro26605 r) {
    return r.valor + r.id;
}
