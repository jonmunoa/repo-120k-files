// fichero 40597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40597;

Registro40597 crear_registro40597(int id) {
    Registro40597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40597(Registro40597 r) {
    return r.valor + r.id;
}
