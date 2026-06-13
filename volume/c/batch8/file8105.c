// fichero 8105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8105;

Registro8105 crear_registro8105(int id) {
    Registro8105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8105(Registro8105 r) {
    return r.valor + r.id;
}
