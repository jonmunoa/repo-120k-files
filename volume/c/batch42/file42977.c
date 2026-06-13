// fichero 42977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42977;

Registro42977 crear_registro42977(int id) {
    Registro42977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42977(Registro42977 r) {
    return r.valor + r.id;
}
