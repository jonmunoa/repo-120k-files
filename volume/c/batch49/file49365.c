// fichero 49365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49365;

Registro49365 crear_registro49365(int id) {
    Registro49365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49365(Registro49365 r) {
    return r.valor + r.id;
}
