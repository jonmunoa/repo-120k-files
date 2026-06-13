// fichero 44297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44297;

Registro44297 crear_registro44297(int id) {
    Registro44297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44297(Registro44297 r) {
    return r.valor + r.id;
}
