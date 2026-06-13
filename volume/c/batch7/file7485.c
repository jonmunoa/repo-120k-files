// fichero 7485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7485;

Registro7485 crear_registro7485(int id) {
    Registro7485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7485(Registro7485 r) {
    return r.valor + r.id;
}
