// fichero 52609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52609;

Registro52609 crear_registro52609(int id) {
    Registro52609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52609(Registro52609 r) {
    return r.valor + r.id;
}
