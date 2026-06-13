// fichero 49125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49125;

Registro49125 crear_registro49125(int id) {
    Registro49125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49125(Registro49125 r) {
    return r.valor + r.id;
}
