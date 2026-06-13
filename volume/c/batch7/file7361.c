// fichero 7361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7361;

Registro7361 crear_registro7361(int id) {
    Registro7361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7361(Registro7361 r) {
    return r.valor + r.id;
}
