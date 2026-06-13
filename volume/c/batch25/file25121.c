// fichero 25121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25121;

Registro25121 crear_registro25121(int id) {
    Registro25121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25121(Registro25121 r) {
    return r.valor + r.id;
}
