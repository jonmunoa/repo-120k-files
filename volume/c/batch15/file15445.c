// fichero 15445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15445;

Registro15445 crear_registro15445(int id) {
    Registro15445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15445(Registro15445 r) {
    return r.valor + r.id;
}
