// fichero 25705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25705;

Registro25705 crear_registro25705(int id) {
    Registro25705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25705(Registro25705 r) {
    return r.valor + r.id;
}
