// fichero 7349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7349;

Registro7349 crear_registro7349(int id) {
    Registro7349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7349(Registro7349 r) {
    return r.valor + r.id;
}
