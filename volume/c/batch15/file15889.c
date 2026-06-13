// fichero 15889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15889;

Registro15889 crear_registro15889(int id) {
    Registro15889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15889(Registro15889 r) {
    return r.valor + r.id;
}
