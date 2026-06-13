// fichero 49189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49189;

Registro49189 crear_registro49189(int id) {
    Registro49189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49189(Registro49189 r) {
    return r.valor + r.id;
}
