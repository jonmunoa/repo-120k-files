// fichero 37421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37421;

Registro37421 crear_registro37421(int id) {
    Registro37421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37421(Registro37421 r) {
    return r.valor + r.id;
}
