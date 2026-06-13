// fichero 25193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25193;

Registro25193 crear_registro25193(int id) {
    Registro25193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25193(Registro25193 r) {
    return r.valor + r.id;
}
