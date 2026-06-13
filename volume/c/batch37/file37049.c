// fichero 37049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37049;

Registro37049 crear_registro37049(int id) {
    Registro37049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37049(Registro37049 r) {
    return r.valor + r.id;
}
