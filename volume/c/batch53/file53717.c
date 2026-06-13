// fichero 53717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53717;

Registro53717 crear_registro53717(int id) {
    Registro53717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53717(Registro53717 r) {
    return r.valor + r.id;
}
