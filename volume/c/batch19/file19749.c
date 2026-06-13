// fichero 19749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19749;

Registro19749 crear_registro19749(int id) {
    Registro19749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19749(Registro19749 r) {
    return r.valor + r.id;
}
