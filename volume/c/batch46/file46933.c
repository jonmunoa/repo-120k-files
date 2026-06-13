// fichero 46933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46933;

Registro46933 crear_registro46933(int id) {
    Registro46933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46933(Registro46933 r) {
    return r.valor + r.id;
}
