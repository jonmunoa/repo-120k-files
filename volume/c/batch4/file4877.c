// fichero 4877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4877;

Registro4877 crear_registro4877(int id) {
    Registro4877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4877(Registro4877 r) {
    return r.valor + r.id;
}
