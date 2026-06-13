// fichero 7013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7013;

Registro7013 crear_registro7013(int id) {
    Registro7013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7013(Registro7013 r) {
    return r.valor + r.id;
}
