// fichero 34297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34297;

Registro34297 crear_registro34297(int id) {
    Registro34297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34297(Registro34297 r) {
    return r.valor + r.id;
}
