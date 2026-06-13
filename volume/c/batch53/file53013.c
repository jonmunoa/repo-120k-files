// fichero 53013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53013;

Registro53013 crear_registro53013(int id) {
    Registro53013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53013(Registro53013 r) {
    return r.valor + r.id;
}
