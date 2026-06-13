// fichero 40253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40253;

Registro40253 crear_registro40253(int id) {
    Registro40253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40253(Registro40253 r) {
    return r.valor + r.id;
}
