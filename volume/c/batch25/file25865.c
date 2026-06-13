// fichero 25865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25865;

Registro25865 crear_registro25865(int id) {
    Registro25865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25865(Registro25865 r) {
    return r.valor + r.id;
}
