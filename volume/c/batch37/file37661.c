// fichero 37661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37661;

Registro37661 crear_registro37661(int id) {
    Registro37661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37661(Registro37661 r) {
    return r.valor + r.id;
}
