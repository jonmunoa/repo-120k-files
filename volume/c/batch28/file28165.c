// fichero 28165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28165;

Registro28165 crear_registro28165(int id) {
    Registro28165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28165(Registro28165 r) {
    return r.valor + r.id;
}
