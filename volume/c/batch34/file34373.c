// fichero 34373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34373;

Registro34373 crear_registro34373(int id) {
    Registro34373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34373(Registro34373 r) {
    return r.valor + r.id;
}
