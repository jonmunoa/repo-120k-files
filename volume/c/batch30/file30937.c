// fichero 30937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30937;

Registro30937 crear_registro30937(int id) {
    Registro30937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30937(Registro30937 r) {
    return r.valor + r.id;
}
