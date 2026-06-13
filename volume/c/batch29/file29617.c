// fichero 29617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29617;

Registro29617 crear_registro29617(int id) {
    Registro29617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29617(Registro29617 r) {
    return r.valor + r.id;
}
