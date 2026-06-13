// fichero 6081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6081;

Registro6081 crear_registro6081(int id) {
    Registro6081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6081(Registro6081 r) {
    return r.valor + r.id;
}
