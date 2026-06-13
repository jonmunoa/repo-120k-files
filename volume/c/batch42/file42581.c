// fichero 42581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42581;

Registro42581 crear_registro42581(int id) {
    Registro42581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42581(Registro42581 r) {
    return r.valor + r.id;
}
