// fichero 49325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49325;

Registro49325 crear_registro49325(int id) {
    Registro49325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49325(Registro49325 r) {
    return r.valor + r.id;
}
