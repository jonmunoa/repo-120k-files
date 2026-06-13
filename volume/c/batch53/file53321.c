// fichero 53321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53321;

Registro53321 crear_registro53321(int id) {
    Registro53321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53321(Registro53321 r) {
    return r.valor + r.id;
}
