// fichero 25933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25933;

Registro25933 crear_registro25933(int id) {
    Registro25933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25933(Registro25933 r) {
    return r.valor + r.id;
}
