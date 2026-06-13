// fichero 15857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15857;

Registro15857 crear_registro15857(int id) {
    Registro15857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15857(Registro15857 r) {
    return r.valor + r.id;
}
