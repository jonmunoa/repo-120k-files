// fichero 47477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47477;

Registro47477 crear_registro47477(int id) {
    Registro47477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47477(Registro47477 r) {
    return r.valor + r.id;
}
