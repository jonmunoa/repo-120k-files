// fichero 49709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49709;

Registro49709 crear_registro49709(int id) {
    Registro49709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49709(Registro49709 r) {
    return r.valor + r.id;
}
