// fichero 2609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2609;

Registro2609 crear_registro2609(int id) {
    Registro2609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2609(Registro2609 r) {
    return r.valor + r.id;
}
