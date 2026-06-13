// fichero 17217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17217;

Registro17217 crear_registro17217(int id) {
    Registro17217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17217(Registro17217 r) {
    return r.valor + r.id;
}
