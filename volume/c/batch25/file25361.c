// fichero 25361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25361;

Registro25361 crear_registro25361(int id) {
    Registro25361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25361(Registro25361 r) {
    return r.valor + r.id;
}
