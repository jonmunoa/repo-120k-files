// fichero 20361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20361;

Registro20361 crear_registro20361(int id) {
    Registro20361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20361(Registro20361 r) {
    return r.valor + r.id;
}
