// fichero 25305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25305;

Registro25305 crear_registro25305(int id) {
    Registro25305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25305(Registro25305 r) {
    return r.valor + r.id;
}
