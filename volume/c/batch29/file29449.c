// fichero 29449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29449;

Registro29449 crear_registro29449(int id) {
    Registro29449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29449(Registro29449 r) {
    return r.valor + r.id;
}
