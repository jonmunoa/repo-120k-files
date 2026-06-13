// fichero 4045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4045;

Registro4045 crear_registro4045(int id) {
    Registro4045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4045(Registro4045 r) {
    return r.valor + r.id;
}
