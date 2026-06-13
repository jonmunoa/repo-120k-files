// fichero 29765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29765;

Registro29765 crear_registro29765(int id) {
    Registro29765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29765(Registro29765 r) {
    return r.valor + r.id;
}
