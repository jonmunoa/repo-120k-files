// fichero 93 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro93;

Registro93 crear_registro93(int id) {
    Registro93 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro93(Registro93 r) {
    return r.valor + r.id;
}
