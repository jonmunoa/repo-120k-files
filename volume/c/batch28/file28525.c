// fichero 28525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28525;

Registro28525 crear_registro28525(int id) {
    Registro28525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28525(Registro28525 r) {
    return r.valor + r.id;
}
