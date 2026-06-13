// fichero 34921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34921;

Registro34921 crear_registro34921(int id) {
    Registro34921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34921(Registro34921 r) {
    return r.valor + r.id;
}
