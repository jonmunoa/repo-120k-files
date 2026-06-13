// fichero 15209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15209;

Registro15209 crear_registro15209(int id) {
    Registro15209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15209(Registro15209 r) {
    return r.valor + r.id;
}
