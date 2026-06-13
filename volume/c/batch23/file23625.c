// fichero 23625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23625;

Registro23625 crear_registro23625(int id) {
    Registro23625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23625(Registro23625 r) {
    return r.valor + r.id;
}
