// fichero 50093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50093;

Registro50093 crear_registro50093(int id) {
    Registro50093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50093(Registro50093 r) {
    return r.valor + r.id;
}
