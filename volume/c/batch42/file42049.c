// fichero 42049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42049;

Registro42049 crear_registro42049(int id) {
    Registro42049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42049(Registro42049 r) {
    return r.valor + r.id;
}
