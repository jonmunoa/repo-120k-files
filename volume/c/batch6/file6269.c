// fichero 6269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6269;

Registro6269 crear_registro6269(int id) {
    Registro6269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6269(Registro6269 r) {
    return r.valor + r.id;
}
