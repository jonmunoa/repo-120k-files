// fichero 34609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34609;

Registro34609 crear_registro34609(int id) {
    Registro34609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34609(Registro34609 r) {
    return r.valor + r.id;
}
