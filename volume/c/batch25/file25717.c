// fichero 25717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25717;

Registro25717 crear_registro25717(int id) {
    Registro25717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25717(Registro25717 r) {
    return r.valor + r.id;
}
