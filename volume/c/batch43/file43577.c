// fichero 43577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43577;

Registro43577 crear_registro43577(int id) {
    Registro43577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43577(Registro43577 r) {
    return r.valor + r.id;
}
