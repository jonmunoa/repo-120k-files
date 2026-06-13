// fichero 21833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21833;

Registro21833 crear_registro21833(int id) {
    Registro21833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21833(Registro21833 r) {
    return r.valor + r.id;
}
