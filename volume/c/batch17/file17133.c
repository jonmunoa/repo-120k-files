// fichero 17133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17133;

Registro17133 crear_registro17133(int id) {
    Registro17133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17133(Registro17133 r) {
    return r.valor + r.id;
}
