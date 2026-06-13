// fichero 24797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24797;

Registro24797 crear_registro24797(int id) {
    Registro24797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24797(Registro24797 r) {
    return r.valor + r.id;
}
