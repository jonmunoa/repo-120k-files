// fichero 25113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25113;

Registro25113 crear_registro25113(int id) {
    Registro25113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25113(Registro25113 r) {
    return r.valor + r.id;
}
