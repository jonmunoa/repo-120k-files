// fichero 47661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47661;

Registro47661 crear_registro47661(int id) {
    Registro47661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47661(Registro47661 r) {
    return r.valor + r.id;
}
