// fichero 29485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29485;

Registro29485 crear_registro29485(int id) {
    Registro29485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29485(Registro29485 r) {
    return r.valor + r.id;
}
