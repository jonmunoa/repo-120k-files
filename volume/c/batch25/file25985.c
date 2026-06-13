// fichero 25985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25985;

Registro25985 crear_registro25985(int id) {
    Registro25985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25985(Registro25985 r) {
    return r.valor + r.id;
}
