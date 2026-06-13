// fichero 15109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15109;

Registro15109 crear_registro15109(int id) {
    Registro15109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15109(Registro15109 r) {
    return r.valor + r.id;
}
