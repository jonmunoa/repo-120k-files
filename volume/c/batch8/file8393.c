// fichero 8393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8393;

Registro8393 crear_registro8393(int id) {
    Registro8393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8393(Registro8393 r) {
    return r.valor + r.id;
}
