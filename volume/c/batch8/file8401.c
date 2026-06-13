// fichero 8401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8401;

Registro8401 crear_registro8401(int id) {
    Registro8401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8401(Registro8401 r) {
    return r.valor + r.id;
}
