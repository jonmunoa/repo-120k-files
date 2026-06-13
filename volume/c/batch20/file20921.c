// fichero 20921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20921;

Registro20921 crear_registro20921(int id) {
    Registro20921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20921(Registro20921 r) {
    return r.valor + r.id;
}
