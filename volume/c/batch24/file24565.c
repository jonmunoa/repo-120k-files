// fichero 24565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24565;

Registro24565 crear_registro24565(int id) {
    Registro24565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24565(Registro24565 r) {
    return r.valor + r.id;
}
