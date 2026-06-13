// fichero 30033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30033;

Registro30033 crear_registro30033(int id) {
    Registro30033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30033(Registro30033 r) {
    return r.valor + r.id;
}
