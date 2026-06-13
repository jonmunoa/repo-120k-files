// fichero 5717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5717;

Registro5717 crear_registro5717(int id) {
    Registro5717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5717(Registro5717 r) {
    return r.valor + r.id;
}
