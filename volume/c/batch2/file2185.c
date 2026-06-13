// fichero 2185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2185;

Registro2185 crear_registro2185(int id) {
    Registro2185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2185(Registro2185 r) {
    return r.valor + r.id;
}
