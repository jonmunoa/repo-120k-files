// fichero 9017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9017;

Registro9017 crear_registro9017(int id) {
    Registro9017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9017(Registro9017 r) {
    return r.valor + r.id;
}
