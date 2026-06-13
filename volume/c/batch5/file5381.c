// fichero 5381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5381;

Registro5381 crear_registro5381(int id) {
    Registro5381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5381(Registro5381 r) {
    return r.valor + r.id;
}
