// fichero 2117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2117;

Registro2117 crear_registro2117(int id) {
    Registro2117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2117(Registro2117 r) {
    return r.valor + r.id;
}
