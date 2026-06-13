// fichero 46077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46077;

Registro46077 crear_registro46077(int id) {
    Registro46077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46077(Registro46077 r) {
    return r.valor + r.id;
}
