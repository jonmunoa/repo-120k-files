// fichero 32393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32393;

Registro32393 crear_registro32393(int id) {
    Registro32393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32393(Registro32393 r) {
    return r.valor + r.id;
}
