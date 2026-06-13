// fichero 5057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5057;

Registro5057 crear_registro5057(int id) {
    Registro5057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5057(Registro5057 r) {
    return r.valor + r.id;
}
