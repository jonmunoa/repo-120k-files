// fichero 24061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24061;

Registro24061 crear_registro24061(int id) {
    Registro24061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24061(Registro24061 r) {
    return r.valor + r.id;
}
