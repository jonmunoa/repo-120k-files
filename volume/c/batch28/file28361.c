// fichero 28361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28361;

Registro28361 crear_registro28361(int id) {
    Registro28361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28361(Registro28361 r) {
    return r.valor + r.id;
}
