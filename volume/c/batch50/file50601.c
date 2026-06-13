// fichero 50601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50601;

Registro50601 crear_registro50601(int id) {
    Registro50601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50601(Registro50601 r) {
    return r.valor + r.id;
}
