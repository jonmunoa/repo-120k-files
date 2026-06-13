// fichero 42073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42073;

Registro42073 crear_registro42073(int id) {
    Registro42073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42073(Registro42073 r) {
    return r.valor + r.id;
}
