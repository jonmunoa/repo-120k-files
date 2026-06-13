// fichero 717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro717;

Registro717 crear_registro717(int id) {
    Registro717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro717(Registro717 r) {
    return r.valor + r.id;
}
