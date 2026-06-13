// fichero 11481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11481;

Registro11481 crear_registro11481(int id) {
    Registro11481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11481(Registro11481 r) {
    return r.valor + r.id;
}
