// fichero 1081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1081;

Registro1081 crear_registro1081(int id) {
    Registro1081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1081(Registro1081 r) {
    return r.valor + r.id;
}
