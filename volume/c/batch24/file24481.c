// fichero 24481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24481;

Registro24481 crear_registro24481(int id) {
    Registro24481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24481(Registro24481 r) {
    return r.valor + r.id;
}
