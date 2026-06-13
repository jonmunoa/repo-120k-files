// fichero 73 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro73;

Registro73 crear_registro73(int id) {
    Registro73 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro73(Registro73 r) {
    return r.valor + r.id;
}
