// fichero 24541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24541;

Registro24541 crear_registro24541(int id) {
    Registro24541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24541(Registro24541 r) {
    return r.valor + r.id;
}
