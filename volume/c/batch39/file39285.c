// fichero 39285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39285;

Registro39285 crear_registro39285(int id) {
    Registro39285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39285(Registro39285 r) {
    return r.valor + r.id;
}
