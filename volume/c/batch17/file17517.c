// fichero 17517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17517;

Registro17517 crear_registro17517(int id) {
    Registro17517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17517(Registro17517 r) {
    return r.valor + r.id;
}
