// fichero 49601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49601;

Registro49601 crear_registro49601(int id) {
    Registro49601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49601(Registro49601 r) {
    return r.valor + r.id;
}
