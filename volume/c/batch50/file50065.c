// fichero 50065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50065;

Registro50065 crear_registro50065(int id) {
    Registro50065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50065(Registro50065 r) {
    return r.valor + r.id;
}
