// fichero 40373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40373;

Registro40373 crear_registro40373(int id) {
    Registro40373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40373(Registro40373 r) {
    return r.valor + r.id;
}
