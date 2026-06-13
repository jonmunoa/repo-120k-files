// fichero 2509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2509;

Registro2509 crear_registro2509(int id) {
    Registro2509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2509(Registro2509 r) {
    return r.valor + r.id;
}
