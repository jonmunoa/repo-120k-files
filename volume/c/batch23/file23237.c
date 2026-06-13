// fichero 23237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23237;

Registro23237 crear_registro23237(int id) {
    Registro23237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23237(Registro23237 r) {
    return r.valor + r.id;
}
