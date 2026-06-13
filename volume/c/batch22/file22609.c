// fichero 22609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22609;

Registro22609 crear_registro22609(int id) {
    Registro22609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22609(Registro22609 r) {
    return r.valor + r.id;
}
