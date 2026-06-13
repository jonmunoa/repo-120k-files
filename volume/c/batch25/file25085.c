// fichero 25085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25085;

Registro25085 crear_registro25085(int id) {
    Registro25085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25085(Registro25085 r) {
    return r.valor + r.id;
}
