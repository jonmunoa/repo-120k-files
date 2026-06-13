// fichero 25049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25049;

Registro25049 crear_registro25049(int id) {
    Registro25049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25049(Registro25049 r) {
    return r.valor + r.id;
}
