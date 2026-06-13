// fichero 29749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29749;

Registro29749 crear_registro29749(int id) {
    Registro29749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29749(Registro29749 r) {
    return r.valor + r.id;
}
