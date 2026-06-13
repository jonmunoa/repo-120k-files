// fichero 32809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32809;

Registro32809 crear_registro32809(int id) {
    Registro32809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32809(Registro32809 r) {
    return r.valor + r.id;
}
