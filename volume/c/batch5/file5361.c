// fichero 5361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5361;

Registro5361 crear_registro5361(int id) {
    Registro5361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5361(Registro5361 r) {
    return r.valor + r.id;
}
