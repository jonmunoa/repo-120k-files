// fichero 39609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39609;

Registro39609 crear_registro39609(int id) {
    Registro39609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39609(Registro39609 r) {
    return r.valor + r.id;
}
