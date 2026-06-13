// fichero 27509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27509;

Registro27509 crear_registro27509(int id) {
    Registro27509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27509(Registro27509 r) {
    return r.valor + r.id;
}
