// fichero 25841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25841;

Registro25841 crear_registro25841(int id) {
    Registro25841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25841(Registro25841 r) {
    return r.valor + r.id;
}
