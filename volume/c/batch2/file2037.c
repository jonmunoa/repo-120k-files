// fichero 2037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2037;

Registro2037 crear_registro2037(int id) {
    Registro2037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2037(Registro2037 r) {
    return r.valor + r.id;
}
