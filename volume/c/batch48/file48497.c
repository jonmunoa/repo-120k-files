// fichero 48497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48497;

Registro48497 crear_registro48497(int id) {
    Registro48497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48497(Registro48497 r) {
    return r.valor + r.id;
}
