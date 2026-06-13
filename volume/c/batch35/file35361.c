// fichero 35361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35361;

Registro35361 crear_registro35361(int id) {
    Registro35361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35361(Registro35361 r) {
    return r.valor + r.id;
}
