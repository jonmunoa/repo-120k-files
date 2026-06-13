// fichero 2501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2501;

Registro2501 crear_registro2501(int id) {
    Registro2501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2501(Registro2501 r) {
    return r.valor + r.id;
}
