// fichero 14497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14497;

Registro14497 crear_registro14497(int id) {
    Registro14497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14497(Registro14497 r) {
    return r.valor + r.id;
}
