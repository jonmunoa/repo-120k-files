// fichero 40717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40717;

Registro40717 crear_registro40717(int id) {
    Registro40717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40717(Registro40717 r) {
    return r.valor + r.id;
}
