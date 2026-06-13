// fichero 521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro521;

Registro521 crear_registro521(int id) {
    Registro521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro521(Registro521 r) {
    return r.valor + r.id;
}
