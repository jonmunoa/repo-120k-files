// fichero 15509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15509;

Registro15509 crear_registro15509(int id) {
    Registro15509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15509(Registro15509 r) {
    return r.valor + r.id;
}
