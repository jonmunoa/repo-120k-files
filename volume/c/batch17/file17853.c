// fichero 17853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17853;

Registro17853 crear_registro17853(int id) {
    Registro17853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17853(Registro17853 r) {
    return r.valor + r.id;
}
