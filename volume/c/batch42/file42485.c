// fichero 42485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42485;

Registro42485 crear_registro42485(int id) {
    Registro42485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42485(Registro42485 r) {
    return r.valor + r.id;
}
