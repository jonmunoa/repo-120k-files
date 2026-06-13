// fichero 15229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15229;

Registro15229 crear_registro15229(int id) {
    Registro15229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15229(Registro15229 r) {
    return r.valor + r.id;
}
