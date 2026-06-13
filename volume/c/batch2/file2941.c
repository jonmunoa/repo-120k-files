// fichero 2941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2941;

Registro2941 crear_registro2941(int id) {
    Registro2941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2941(Registro2941 r) {
    return r.valor + r.id;
}
