// fichero 12525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12525;

Registro12525 crear_registro12525(int id) {
    Registro12525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12525(Registro12525 r) {
    return r.valor + r.id;
}
