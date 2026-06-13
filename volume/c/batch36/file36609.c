// fichero 36609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36609;

Registro36609 crear_registro36609(int id) {
    Registro36609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36609(Registro36609 r) {
    return r.valor + r.id;
}
