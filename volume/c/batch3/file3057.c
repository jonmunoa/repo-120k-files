// fichero 3057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3057;

Registro3057 crear_registro3057(int id) {
    Registro3057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3057(Registro3057 r) {
    return r.valor + r.id;
}
