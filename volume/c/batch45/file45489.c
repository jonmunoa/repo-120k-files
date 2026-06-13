// fichero 45489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45489;

Registro45489 crear_registro45489(int id) {
    Registro45489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45489(Registro45489 r) {
    return r.valor + r.id;
}
