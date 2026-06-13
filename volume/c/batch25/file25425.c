// fichero 25425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25425;

Registro25425 crear_registro25425(int id) {
    Registro25425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25425(Registro25425 r) {
    return r.valor + r.id;
}
