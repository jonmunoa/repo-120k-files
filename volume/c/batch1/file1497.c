// fichero 1497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1497;

Registro1497 crear_registro1497(int id) {
    Registro1497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1497(Registro1497 r) {
    return r.valor + r.id;
}
