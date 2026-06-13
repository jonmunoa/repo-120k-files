// fichero 9377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9377;

Registro9377 crear_registro9377(int id) {
    Registro9377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9377(Registro9377 r) {
    return r.valor + r.id;
}
