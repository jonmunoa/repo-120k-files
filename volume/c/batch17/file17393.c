// fichero 17393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17393;

Registro17393 crear_registro17393(int id) {
    Registro17393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17393(Registro17393 r) {
    return r.valor + r.id;
}
