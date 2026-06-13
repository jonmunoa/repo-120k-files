// fichero 5609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5609;

Registro5609 crear_registro5609(int id) {
    Registro5609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5609(Registro5609 r) {
    return r.valor + r.id;
}
