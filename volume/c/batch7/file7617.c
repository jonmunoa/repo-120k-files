// fichero 7617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7617;

Registro7617 crear_registro7617(int id) {
    Registro7617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7617(Registro7617 r) {
    return r.valor + r.id;
}
