// fichero 25617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25617;

Registro25617 crear_registro25617(int id) {
    Registro25617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25617(Registro25617 r) {
    return r.valor + r.id;
}
