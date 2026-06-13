// fichero 18509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18509;

Registro18509 crear_registro18509(int id) {
    Registro18509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18509(Registro18509 r) {
    return r.valor + r.id;
}
