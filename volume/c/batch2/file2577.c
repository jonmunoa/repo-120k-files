// fichero 2577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2577;

Registro2577 crear_registro2577(int id) {
    Registro2577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2577(Registro2577 r) {
    return r.valor + r.id;
}
