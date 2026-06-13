// fichero 35253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35253;

Registro35253 crear_registro35253(int id) {
    Registro35253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35253(Registro35253 r) {
    return r.valor + r.id;
}
