// fichero 24993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24993;

Registro24993 crear_registro24993(int id) {
    Registro24993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24993(Registro24993 r) {
    return r.valor + r.id;
}
