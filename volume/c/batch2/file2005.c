// fichero 2005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2005;

Registro2005 crear_registro2005(int id) {
    Registro2005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2005(Registro2005 r) {
    return r.valor + r.id;
}
