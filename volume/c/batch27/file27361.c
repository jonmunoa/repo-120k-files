// fichero 27361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27361;

Registro27361 crear_registro27361(int id) {
    Registro27361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27361(Registro27361 r) {
    return r.valor + r.id;
}
