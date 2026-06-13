// fichero 37345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37345;

Registro37345 crear_registro37345(int id) {
    Registro37345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37345(Registro37345 r) {
    return r.valor + r.id;
}
