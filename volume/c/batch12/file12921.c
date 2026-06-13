// fichero 12921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12921;

Registro12921 crear_registro12921(int id) {
    Registro12921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12921(Registro12921 r) {
    return r.valor + r.id;
}
