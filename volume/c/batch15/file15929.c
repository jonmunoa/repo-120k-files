// fichero 15929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15929;

Registro15929 crear_registro15929(int id) {
    Registro15929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15929(Registro15929 r) {
    return r.valor + r.id;
}
