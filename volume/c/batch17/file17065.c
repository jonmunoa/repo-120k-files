// fichero 17065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17065;

Registro17065 crear_registro17065(int id) {
    Registro17065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17065(Registro17065 r) {
    return r.valor + r.id;
}
