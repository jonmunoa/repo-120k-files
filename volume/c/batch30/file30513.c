// fichero 30513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30513;

Registro30513 crear_registro30513(int id) {
    Registro30513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30513(Registro30513 r) {
    return r.valor + r.id;
}
