// fichero 42913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42913;

Registro42913 crear_registro42913(int id) {
    Registro42913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42913(Registro42913 r) {
    return r.valor + r.id;
}
