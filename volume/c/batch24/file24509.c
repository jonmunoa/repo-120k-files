// fichero 24509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24509;

Registro24509 crear_registro24509(int id) {
    Registro24509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24509(Registro24509 r) {
    return r.valor + r.id;
}
