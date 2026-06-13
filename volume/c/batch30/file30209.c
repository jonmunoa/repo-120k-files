// fichero 30209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30209;

Registro30209 crear_registro30209(int id) {
    Registro30209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30209(Registro30209 r) {
    return r.valor + r.id;
}
