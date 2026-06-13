// fichero 17757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17757;

Registro17757 crear_registro17757(int id) {
    Registro17757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17757(Registro17757 r) {
    return r.valor + r.id;
}
