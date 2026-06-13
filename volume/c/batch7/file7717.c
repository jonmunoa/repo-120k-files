// fichero 7717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7717;

Registro7717 crear_registro7717(int id) {
    Registro7717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7717(Registro7717 r) {
    return r.valor + r.id;
}
