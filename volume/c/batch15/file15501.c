// fichero 15501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15501;

Registro15501 crear_registro15501(int id) {
    Registro15501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15501(Registro15501 r) {
    return r.valor + r.id;
}
