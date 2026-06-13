// fichero 37057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37057;

Registro37057 crear_registro37057(int id) {
    Registro37057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37057(Registro37057 r) {
    return r.valor + r.id;
}
