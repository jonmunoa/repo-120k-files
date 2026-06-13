// fichero 42465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42465;

Registro42465 crear_registro42465(int id) {
    Registro42465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42465(Registro42465 r) {
    return r.valor + r.id;
}
