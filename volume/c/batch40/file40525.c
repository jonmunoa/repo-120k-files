// fichero 40525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40525;

Registro40525 crear_registro40525(int id) {
    Registro40525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40525(Registro40525 r) {
    return r.valor + r.id;
}
