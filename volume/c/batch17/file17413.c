// fichero 17413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17413;

Registro17413 crear_registro17413(int id) {
    Registro17413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17413(Registro17413 r) {
    return r.valor + r.id;
}
