// fichero 2013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2013;

Registro2013 crear_registro2013(int id) {
    Registro2013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2013(Registro2013 r) {
    return r.valor + r.id;
}
