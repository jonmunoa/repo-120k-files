// fichero 11533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11533;

Registro11533 crear_registro11533(int id) {
    Registro11533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11533(Registro11533 r) {
    return r.valor + r.id;
}
