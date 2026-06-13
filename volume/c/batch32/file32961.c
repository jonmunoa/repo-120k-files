// fichero 32961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32961;

Registro32961 crear_registro32961(int id) {
    Registro32961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32961(Registro32961 r) {
    return r.valor + r.id;
}
