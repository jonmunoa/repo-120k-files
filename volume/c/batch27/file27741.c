// fichero 27741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27741;

Registro27741 crear_registro27741(int id) {
    Registro27741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27741(Registro27741 r) {
    return r.valor + r.id;
}
