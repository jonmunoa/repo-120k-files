// fichero 17625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17625;

Registro17625 crear_registro17625(int id) {
    Registro17625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17625(Registro17625 r) {
    return r.valor + r.id;
}
