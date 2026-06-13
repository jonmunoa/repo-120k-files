// fichero 20509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20509;

Registro20509 crear_registro20509(int id) {
    Registro20509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20509(Registro20509 r) {
    return r.valor + r.id;
}
