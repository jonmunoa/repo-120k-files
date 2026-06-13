// fichero 2229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2229;

Registro2229 crear_registro2229(int id) {
    Registro2229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2229(Registro2229 r) {
    return r.valor + r.id;
}
