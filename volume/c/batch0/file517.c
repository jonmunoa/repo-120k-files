// fichero 517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro517;

Registro517 crear_registro517(int id) {
    Registro517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro517(Registro517 r) {
    return r.valor + r.id;
}
