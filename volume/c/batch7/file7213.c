// fichero 7213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7213;

Registro7213 crear_registro7213(int id) {
    Registro7213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7213(Registro7213 r) {
    return r.valor + r.id;
}
