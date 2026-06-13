// fichero 43513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43513;

Registro43513 crear_registro43513(int id) {
    Registro43513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43513(Registro43513 r) {
    return r.valor + r.id;
}
