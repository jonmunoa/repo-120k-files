// fichero 7609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7609;

Registro7609 crear_registro7609(int id) {
    Registro7609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7609(Registro7609 r) {
    return r.valor + r.id;
}
