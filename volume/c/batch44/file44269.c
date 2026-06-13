// fichero 44269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44269;

Registro44269 crear_registro44269(int id) {
    Registro44269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44269(Registro44269 r) {
    return r.valor + r.id;
}
