// fichero 14373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14373;

Registro14373 crear_registro14373(int id) {
    Registro14373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14373(Registro14373 r) {
    return r.valor + r.id;
}
