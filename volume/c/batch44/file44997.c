// fichero 44997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44997;

Registro44997 crear_registro44997(int id) {
    Registro44997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44997(Registro44997 r) {
    return r.valor + r.id;
}
