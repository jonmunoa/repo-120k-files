// fichero 25929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25929;

Registro25929 crear_registro25929(int id) {
    Registro25929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25929(Registro25929 r) {
    return r.valor + r.id;
}
