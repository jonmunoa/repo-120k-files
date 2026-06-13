// fichero 48505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48505;

Registro48505 crear_registro48505(int id) {
    Registro48505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48505(Registro48505 r) {
    return r.valor + r.id;
}
