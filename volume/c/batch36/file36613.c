// fichero 36613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36613;

Registro36613 crear_registro36613(int id) {
    Registro36613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36613(Registro36613 r) {
    return r.valor + r.id;
}
