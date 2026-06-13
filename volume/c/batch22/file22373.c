// fichero 22373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22373;

Registro22373 crear_registro22373(int id) {
    Registro22373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22373(Registro22373 r) {
    return r.valor + r.id;
}
