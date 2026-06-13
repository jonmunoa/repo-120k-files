// fichero 3217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3217;

Registro3217 crear_registro3217(int id) {
    Registro3217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3217(Registro3217 r) {
    return r.valor + r.id;
}
