// fichero 28245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28245;

Registro28245 crear_registro28245(int id) {
    Registro28245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28245(Registro28245 r) {
    return r.valor + r.id;
}
