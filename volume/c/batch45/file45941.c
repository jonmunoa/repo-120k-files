// fichero 45941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45941;

Registro45941 crear_registro45941(int id) {
    Registro45941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45941(Registro45941 r) {
    return r.valor + r.id;
}
