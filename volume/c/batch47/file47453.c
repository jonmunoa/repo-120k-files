// fichero 47453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47453;

Registro47453 crear_registro47453(int id) {
    Registro47453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47453(Registro47453 r) {
    return r.valor + r.id;
}
