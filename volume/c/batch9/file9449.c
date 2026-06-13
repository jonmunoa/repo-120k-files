// fichero 9449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9449;

Registro9449 crear_registro9449(int id) {
    Registro9449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9449(Registro9449 r) {
    return r.valor + r.id;
}
