// fichero 24809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24809;

Registro24809 crear_registro24809(int id) {
    Registro24809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24809(Registro24809 r) {
    return r.valor + r.id;
}
