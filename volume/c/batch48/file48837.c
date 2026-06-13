// fichero 48837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48837;

Registro48837 crear_registro48837(int id) {
    Registro48837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48837(Registro48837 r) {
    return r.valor + r.id;
}
