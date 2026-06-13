// fichero 5497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5497;

Registro5497 crear_registro5497(int id) {
    Registro5497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5497(Registro5497 r) {
    return r.valor + r.id;
}
