// fichero 17209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17209;

Registro17209 crear_registro17209(int id) {
    Registro17209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17209(Registro17209 r) {
    return r.valor + r.id;
}
