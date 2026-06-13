// fichero 48393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48393;

Registro48393 crear_registro48393(int id) {
    Registro48393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48393(Registro48393 r) {
    return r.valor + r.id;
}
