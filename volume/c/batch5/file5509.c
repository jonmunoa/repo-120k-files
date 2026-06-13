// fichero 5509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5509;

Registro5509 crear_registro5509(int id) {
    Registro5509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5509(Registro5509 r) {
    return r.valor + r.id;
}
