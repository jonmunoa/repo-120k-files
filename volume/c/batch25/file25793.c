// fichero 25793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25793;

Registro25793 crear_registro25793(int id) {
    Registro25793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25793(Registro25793 r) {
    return r.valor + r.id;
}
