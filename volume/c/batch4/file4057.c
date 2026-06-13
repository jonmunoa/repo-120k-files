// fichero 4057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4057;

Registro4057 crear_registro4057(int id) {
    Registro4057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4057(Registro4057 r) {
    return r.valor + r.id;
}
