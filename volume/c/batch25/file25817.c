// fichero 25817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25817;

Registro25817 crear_registro25817(int id) {
    Registro25817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25817(Registro25817 r) {
    return r.valor + r.id;
}
