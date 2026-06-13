// fichero 17401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17401;

Registro17401 crear_registro17401(int id) {
    Registro17401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17401(Registro17401 r) {
    return r.valor + r.id;
}
