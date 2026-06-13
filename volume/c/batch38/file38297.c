// fichero 38297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38297;

Registro38297 crear_registro38297(int id) {
    Registro38297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38297(Registro38297 r) {
    return r.valor + r.id;
}
