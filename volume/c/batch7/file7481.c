// fichero 7481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7481;

Registro7481 crear_registro7481(int id) {
    Registro7481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7481(Registro7481 r) {
    return r.valor + r.id;
}
