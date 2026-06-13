// fichero 21105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21105;

Registro21105 crear_registro21105(int id) {
    Registro21105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21105(Registro21105 r) {
    return r.valor + r.id;
}
