// fichero 30225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30225;

Registro30225 crear_registro30225(int id) {
    Registro30225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30225(Registro30225 r) {
    return r.valor + r.id;
}
