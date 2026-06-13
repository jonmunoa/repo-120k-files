// fichero 52717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52717;

Registro52717 crear_registro52717(int id) {
    Registro52717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52717(Registro52717 r) {
    return r.valor + r.id;
}
