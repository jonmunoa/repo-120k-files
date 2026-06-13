// fichero 37001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37001;

Registro37001 crear_registro37001(int id) {
    Registro37001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37001(Registro37001 r) {
    return r.valor + r.id;
}
