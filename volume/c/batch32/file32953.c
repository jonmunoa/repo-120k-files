// fichero 32953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32953;

Registro32953 crear_registro32953(int id) {
    Registro32953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32953(Registro32953 r) {
    return r.valor + r.id;
}
