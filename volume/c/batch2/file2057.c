// fichero 2057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2057;

Registro2057 crear_registro2057(int id) {
    Registro2057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2057(Registro2057 r) {
    return r.valor + r.id;
}
