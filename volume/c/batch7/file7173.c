// fichero 7173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7173;

Registro7173 crear_registro7173(int id) {
    Registro7173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7173(Registro7173 r) {
    return r.valor + r.id;
}
