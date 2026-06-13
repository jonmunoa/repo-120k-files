// fichero 48749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48749;

Registro48749 crear_registro48749(int id) {
    Registro48749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48749(Registro48749 r) {
    return r.valor + r.id;
}
