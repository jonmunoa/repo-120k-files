// fichero 21957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21957;

Registro21957 crear_registro21957(int id) {
    Registro21957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21957(Registro21957 r) {
    return r.valor + r.id;
}
