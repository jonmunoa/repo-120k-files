// fichero 40813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40813;

Registro40813 crear_registro40813(int id) {
    Registro40813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40813(Registro40813 r) {
    return r.valor + r.id;
}
