// fichero 28173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28173;

Registro28173 crear_registro28173(int id) {
    Registro28173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28173(Registro28173 r) {
    return r.valor + r.id;
}
