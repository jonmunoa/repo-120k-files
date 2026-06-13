// fichero 45057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45057;

Registro45057 crear_registro45057(int id) {
    Registro45057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45057(Registro45057 r) {
    return r.valor + r.id;
}
