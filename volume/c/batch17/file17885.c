// fichero 17885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17885;

Registro17885 crear_registro17885(int id) {
    Registro17885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17885(Registro17885 r) {
    return r.valor + r.id;
}
