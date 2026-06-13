// fichero 15145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15145;

Registro15145 crear_registro15145(int id) {
    Registro15145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15145(Registro15145 r) {
    return r.valor + r.id;
}
