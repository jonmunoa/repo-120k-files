// fichero 28901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28901;

Registro28901 crear_registro28901(int id) {
    Registro28901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28901(Registro28901 r) {
    return r.valor + r.id;
}
