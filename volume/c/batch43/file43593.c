// fichero 43593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43593;

Registro43593 crear_registro43593(int id) {
    Registro43593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43593(Registro43593 r) {
    return r.valor + r.id;
}
