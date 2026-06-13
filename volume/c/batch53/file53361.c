// fichero 53361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53361;

Registro53361 crear_registro53361(int id) {
    Registro53361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53361(Registro53361 r) {
    return r.valor + r.id;
}
