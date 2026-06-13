// fichero 36653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36653;

Registro36653 crear_registro36653(int id) {
    Registro36653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36653(Registro36653 r) {
    return r.valor + r.id;
}
