// fichero 32645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32645;

Registro32645 crear_registro32645(int id) {
    Registro32645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32645(Registro32645 r) {
    return r.valor + r.id;
}
