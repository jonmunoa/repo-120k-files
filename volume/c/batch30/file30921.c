// fichero 30921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30921;

Registro30921 crear_registro30921(int id) {
    Registro30921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30921(Registro30921 r) {
    return r.valor + r.id;
}
