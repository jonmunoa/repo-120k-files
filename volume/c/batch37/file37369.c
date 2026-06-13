// fichero 37369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37369;

Registro37369 crear_registro37369(int id) {
    Registro37369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37369(Registro37369 r) {
    return r.valor + r.id;
}
