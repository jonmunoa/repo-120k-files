// fichero 25093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25093;

Registro25093 crear_registro25093(int id) {
    Registro25093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25093(Registro25093 r) {
    return r.valor + r.id;
}
