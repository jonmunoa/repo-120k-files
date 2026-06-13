// fichero 49921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49921;

Registro49921 crear_registro49921(int id) {
    Registro49921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49921(Registro49921 r) {
    return r.valor + r.id;
}
