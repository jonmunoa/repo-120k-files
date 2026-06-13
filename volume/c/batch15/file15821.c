// fichero 15821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15821;

Registro15821 crear_registro15821(int id) {
    Registro15821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15821(Registro15821 r) {
    return r.valor + r.id;
}
