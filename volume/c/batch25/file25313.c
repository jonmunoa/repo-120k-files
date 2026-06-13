// fichero 25313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25313;

Registro25313 crear_registro25313(int id) {
    Registro25313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25313(Registro25313 r) {
    return r.valor + r.id;
}
