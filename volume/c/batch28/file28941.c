// fichero 28941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28941;

Registro28941 crear_registro28941(int id) {
    Registro28941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28941(Registro28941 r) {
    return r.valor + r.id;
}
