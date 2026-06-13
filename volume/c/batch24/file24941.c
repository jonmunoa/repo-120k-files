// fichero 24941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24941;

Registro24941 crear_registro24941(int id) {
    Registro24941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24941(Registro24941 r) {
    return r.valor + r.id;
}
