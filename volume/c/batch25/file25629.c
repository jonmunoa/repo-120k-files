// fichero 25629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25629;

Registro25629 crear_registro25629(int id) {
    Registro25629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25629(Registro25629 r) {
    return r.valor + r.id;
}
