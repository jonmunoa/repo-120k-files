// fichero 37425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37425;

Registro37425 crear_registro37425(int id) {
    Registro37425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37425(Registro37425 r) {
    return r.valor + r.id;
}
