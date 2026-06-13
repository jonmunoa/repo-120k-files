// fichero 20569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20569;

Registro20569 crear_registro20569(int id) {
    Registro20569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20569(Registro20569 r) {
    return r.valor + r.id;
}
