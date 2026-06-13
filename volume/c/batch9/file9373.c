// fichero 9373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9373;

Registro9373 crear_registro9373(int id) {
    Registro9373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9373(Registro9373 r) {
    return r.valor + r.id;
}
