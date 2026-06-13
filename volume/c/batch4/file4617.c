// fichero 4617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4617;

Registro4617 crear_registro4617(int id) {
    Registro4617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4617(Registro4617 r) {
    return r.valor + r.id;
}
