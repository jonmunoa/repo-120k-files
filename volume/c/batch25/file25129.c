// fichero 25129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25129;

Registro25129 crear_registro25129(int id) {
    Registro25129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25129(Registro25129 r) {
    return r.valor + r.id;
}
