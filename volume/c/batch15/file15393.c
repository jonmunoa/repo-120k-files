// fichero 15393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15393;

Registro15393 crear_registro15393(int id) {
    Registro15393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15393(Registro15393 r) {
    return r.valor + r.id;
}
