// fichero 26585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26585;

Registro26585 crear_registro26585(int id) {
    Registro26585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26585(Registro26585 r) {
    return r.valor + r.id;
}
