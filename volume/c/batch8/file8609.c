// fichero 8609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8609;

Registro8609 crear_registro8609(int id) {
    Registro8609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8609(Registro8609 r) {
    return r.valor + r.id;
}
