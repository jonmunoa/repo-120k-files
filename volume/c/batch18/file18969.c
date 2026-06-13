// fichero 18969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18969;

Registro18969 crear_registro18969(int id) {
    Registro18969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18969(Registro18969 r) {
    return r.valor + r.id;
}
