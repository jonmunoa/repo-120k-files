// fichero 22977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22977;

Registro22977 crear_registro22977(int id) {
    Registro22977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22977(Registro22977 r) {
    return r.valor + r.id;
}
