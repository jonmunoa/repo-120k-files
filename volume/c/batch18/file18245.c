// fichero 18245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18245;

Registro18245 crear_registro18245(int id) {
    Registro18245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18245(Registro18245 r) {
    return r.valor + r.id;
}
