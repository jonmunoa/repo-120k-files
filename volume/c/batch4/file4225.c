// fichero 4225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4225;

Registro4225 crear_registro4225(int id) {
    Registro4225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4225(Registro4225 r) {
    return r.valor + r.id;
}
