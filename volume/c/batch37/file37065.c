// fichero 37065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37065;

Registro37065 crear_registro37065(int id) {
    Registro37065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37065(Registro37065 r) {
    return r.valor + r.id;
}
