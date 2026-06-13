// fichero 7465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7465;

Registro7465 crear_registro7465(int id) {
    Registro7465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7465(Registro7465 r) {
    return r.valor + r.id;
}
