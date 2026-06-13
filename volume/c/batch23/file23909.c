// fichero 23909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23909;

Registro23909 crear_registro23909(int id) {
    Registro23909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23909(Registro23909 r) {
    return r.valor + r.id;
}
