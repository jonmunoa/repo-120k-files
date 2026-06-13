// fichero 50057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50057;

Registro50057 crear_registro50057(int id) {
    Registro50057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50057(Registro50057 r) {
    return r.valor + r.id;
}
