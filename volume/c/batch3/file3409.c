// fichero 3409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3409;

Registro3409 crear_registro3409(int id) {
    Registro3409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3409(Registro3409 r) {
    return r.valor + r.id;
}
