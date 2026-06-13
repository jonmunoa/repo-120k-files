// fichero 15057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15057;

Registro15057 crear_registro15057(int id) {
    Registro15057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15057(Registro15057 r) {
    return r.valor + r.id;
}
