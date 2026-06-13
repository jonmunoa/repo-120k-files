// fichero 15265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15265;

Registro15265 crear_registro15265(int id) {
    Registro15265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15265(Registro15265 r) {
    return r.valor + r.id;
}
