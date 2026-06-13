// fichero 50381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50381;

Registro50381 crear_registro50381(int id) {
    Registro50381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50381(Registro50381 r) {
    return r.valor + r.id;
}
