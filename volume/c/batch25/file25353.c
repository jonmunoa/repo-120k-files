// fichero 25353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25353;

Registro25353 crear_registro25353(int id) {
    Registro25353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25353(Registro25353 r) {
    return r.valor + r.id;
}
