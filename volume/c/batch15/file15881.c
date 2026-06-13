// fichero 15881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15881;

Registro15881 crear_registro15881(int id) {
    Registro15881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15881(Registro15881 r) {
    return r.valor + r.id;
}
