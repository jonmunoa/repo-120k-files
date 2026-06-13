// fichero 44101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44101;

Registro44101 crear_registro44101(int id) {
    Registro44101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44101(Registro44101 r) {
    return r.valor + r.id;
}
