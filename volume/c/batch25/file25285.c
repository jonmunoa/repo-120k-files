// fichero 25285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25285;

Registro25285 crear_registro25285(int id) {
    Registro25285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25285(Registro25285 r) {
    return r.valor + r.id;
}
