// fichero 2881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2881;

Registro2881 crear_registro2881(int id) {
    Registro2881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2881(Registro2881 r) {
    return r.valor + r.id;
}
