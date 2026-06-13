// fichero 28601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28601;

Registro28601 crear_registro28601(int id) {
    Registro28601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28601(Registro28601 r) {
    return r.valor + r.id;
}
