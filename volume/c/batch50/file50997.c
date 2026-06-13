// fichero 50997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50997;

Registro50997 crear_registro50997(int id) {
    Registro50997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50997(Registro50997 r) {
    return r.valor + r.id;
}
