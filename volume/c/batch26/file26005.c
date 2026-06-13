// fichero 26005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26005;

Registro26005 crear_registro26005(int id) {
    Registro26005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26005(Registro26005 r) {
    return r.valor + r.id;
}
