// fichero 25549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25549;

Registro25549 crear_registro25549(int id) {
    Registro25549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25549(Registro25549 r) {
    return r.valor + r.id;
}
