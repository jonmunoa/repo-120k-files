// fichero 3609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3609;

Registro3609 crear_registro3609(int id) {
    Registro3609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3609(Registro3609 r) {
    return r.valor + r.id;
}
