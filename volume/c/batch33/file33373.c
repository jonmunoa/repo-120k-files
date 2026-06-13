// fichero 33373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33373;

Registro33373 crear_registro33373(int id) {
    Registro33373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33373(Registro33373 r) {
    return r.valor + r.id;
}
