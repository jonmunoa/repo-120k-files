// fichero 3393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3393;

Registro3393 crear_registro3393(int id) {
    Registro3393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3393(Registro3393 r) {
    return r.valor + r.id;
}
