// fichero 25857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25857;

Registro25857 crear_registro25857(int id) {
    Registro25857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25857(Registro25857 r) {
    return r.valor + r.id;
}
