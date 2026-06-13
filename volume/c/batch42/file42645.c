// fichero 42645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42645;

Registro42645 crear_registro42645(int id) {
    Registro42645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42645(Registro42645 r) {
    return r.valor + r.id;
}
