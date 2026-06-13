// fichero 49273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49273;

Registro49273 crear_registro49273(int id) {
    Registro49273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49273(Registro49273 r) {
    return r.valor + r.id;
}
