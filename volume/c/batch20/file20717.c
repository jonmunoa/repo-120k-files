// fichero 20717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20717;

Registro20717 crear_registro20717(int id) {
    Registro20717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20717(Registro20717 r) {
    return r.valor + r.id;
}
