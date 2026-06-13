// fichero 7765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7765;

Registro7765 crear_registro7765(int id) {
    Registro7765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7765(Registro7765 r) {
    return r.valor + r.id;
}
