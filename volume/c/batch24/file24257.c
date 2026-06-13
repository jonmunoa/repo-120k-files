// fichero 24257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24257;

Registro24257 crear_registro24257(int id) {
    Registro24257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24257(Registro24257 r) {
    return r.valor + r.id;
}
