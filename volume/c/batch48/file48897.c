// fichero 48897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48897;

Registro48897 crear_registro48897(int id) {
    Registro48897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48897(Registro48897 r) {
    return r.valor + r.id;
}
