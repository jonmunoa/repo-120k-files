// fichero 6497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6497;

Registro6497 crear_registro6497(int id) {
    Registro6497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6497(Registro6497 r) {
    return r.valor + r.id;
}
