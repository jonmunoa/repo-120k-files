// fichero 28353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28353;

Registro28353 crear_registro28353(int id) {
    Registro28353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28353(Registro28353 r) {
    return r.valor + r.id;
}
