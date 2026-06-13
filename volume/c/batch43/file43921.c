// fichero 43921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43921;

Registro43921 crear_registro43921(int id) {
    Registro43921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43921(Registro43921 r) {
    return r.valor + r.id;
}
