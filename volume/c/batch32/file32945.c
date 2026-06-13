// fichero 32945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32945;

Registro32945 crear_registro32945(int id) {
    Registro32945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32945(Registro32945 r) {
    return r.valor + r.id;
}
