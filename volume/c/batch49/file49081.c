// fichero 49081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49081;

Registro49081 crear_registro49081(int id) {
    Registro49081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49081(Registro49081 r) {
    return r.valor + r.id;
}
