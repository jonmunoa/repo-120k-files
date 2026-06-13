// fichero 30757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30757;

Registro30757 crear_registro30757(int id) {
    Registro30757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30757(Registro30757 r) {
    return r.valor + r.id;
}
