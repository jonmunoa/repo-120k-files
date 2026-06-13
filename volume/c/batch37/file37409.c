// fichero 37409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37409;

Registro37409 crear_registro37409(int id) {
    Registro37409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37409(Registro37409 r) {
    return r.valor + r.id;
}
