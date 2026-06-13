// fichero 27525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27525;

Registro27525 crear_registro27525(int id) {
    Registro27525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27525(Registro27525 r) {
    return r.valor + r.id;
}
