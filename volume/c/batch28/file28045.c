// fichero 28045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28045;

Registro28045 crear_registro28045(int id) {
    Registro28045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28045(Registro28045 r) {
    return r.valor + r.id;
}
