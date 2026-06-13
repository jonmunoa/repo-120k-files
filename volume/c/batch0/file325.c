// fichero 325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro325;

Registro325 crear_registro325(int id) {
    Registro325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro325(Registro325 r) {
    return r.valor + r.id;
}
