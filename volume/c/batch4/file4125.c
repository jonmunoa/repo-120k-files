// fichero 4125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4125;

Registro4125 crear_registro4125(int id) {
    Registro4125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4125(Registro4125 r) {
    return r.valor + r.id;
}
