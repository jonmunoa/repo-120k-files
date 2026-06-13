// fichero 28509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28509;

Registro28509 crear_registro28509(int id) {
    Registro28509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28509(Registro28509 r) {
    return r.valor + r.id;
}
