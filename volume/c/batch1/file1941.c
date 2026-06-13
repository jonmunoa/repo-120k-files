// fichero 1941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1941;

Registro1941 crear_registro1941(int id) {
    Registro1941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1941(Registro1941 r) {
    return r.valor + r.id;
}
