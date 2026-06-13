// fichero 50625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50625;

Registro50625 crear_registro50625(int id) {
    Registro50625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50625(Registro50625 r) {
    return r.valor + r.id;
}
