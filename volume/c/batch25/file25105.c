// fichero 25105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25105;

Registro25105 crear_registro25105(int id) {
    Registro25105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25105(Registro25105 r) {
    return r.valor + r.id;
}
