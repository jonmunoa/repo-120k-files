// fichero 7061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7061;

Registro7061 crear_registro7061(int id) {
    Registro7061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7061(Registro7061 r) {
    return r.valor + r.id;
}
