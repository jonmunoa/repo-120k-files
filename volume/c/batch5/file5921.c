// fichero 5921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5921;

Registro5921 crear_registro5921(int id) {
    Registro5921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5921(Registro5921 r) {
    return r.valor + r.id;
}
