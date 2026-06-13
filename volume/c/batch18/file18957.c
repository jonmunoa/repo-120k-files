// fichero 18957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18957;

Registro18957 crear_registro18957(int id) {
    Registro18957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18957(Registro18957 r) {
    return r.valor + r.id;
}
