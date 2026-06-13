// fichero 22213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22213;

Registro22213 crear_registro22213(int id) {
    Registro22213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22213(Registro22213 r) {
    return r.valor + r.id;
}
