// fichero 17421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17421;

Registro17421 crear_registro17421(int id) {
    Registro17421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17421(Registro17421 r) {
    return r.valor + r.id;
}
