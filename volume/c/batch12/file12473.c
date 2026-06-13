// fichero 12473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12473;

Registro12473 crear_registro12473(int id) {
    Registro12473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12473(Registro12473 r) {
    return r.valor + r.id;
}
