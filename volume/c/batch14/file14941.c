// fichero 14941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14941;

Registro14941 crear_registro14941(int id) {
    Registro14941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14941(Registro14941 r) {
    return r.valor + r.id;
}
