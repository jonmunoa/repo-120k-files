// fichero 27397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27397;

Registro27397 crear_registro27397(int id) {
    Registro27397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27397(Registro27397 r) {
    return r.valor + r.id;
}
