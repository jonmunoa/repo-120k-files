// fichero 44509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44509;

Registro44509 crear_registro44509(int id) {
    Registro44509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44509(Registro44509 r) {
    return r.valor + r.id;
}
