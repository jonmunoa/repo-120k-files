// fichero 30089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30089;

Registro30089 crear_registro30089(int id) {
    Registro30089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30089(Registro30089 r) {
    return r.valor + r.id;
}
