// fichero 36409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36409;

Registro36409 crear_registro36409(int id) {
    Registro36409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36409(Registro36409 r) {
    return r.valor + r.id;
}
