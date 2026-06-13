// fichero 31609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31609;

Registro31609 crear_registro31609(int id) {
    Registro31609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31609(Registro31609 r) {
    return r.valor + r.id;
}
