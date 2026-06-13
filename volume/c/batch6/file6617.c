// fichero 6617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6617;

Registro6617 crear_registro6617(int id) {
    Registro6617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6617(Registro6617 r) {
    return r.valor + r.id;
}
