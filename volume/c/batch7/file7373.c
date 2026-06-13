// fichero 7373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7373;

Registro7373 crear_registro7373(int id) {
    Registro7373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7373(Registro7373 r) {
    return r.valor + r.id;
}
