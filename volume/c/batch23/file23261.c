// fichero 23261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23261;

Registro23261 crear_registro23261(int id) {
    Registro23261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23261(Registro23261 r) {
    return r.valor + r.id;
}
