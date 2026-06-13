// fichero 15753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15753;

Registro15753 crear_registro15753(int id) {
    Registro15753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15753(Registro15753 r) {
    return r.valor + r.id;
}
