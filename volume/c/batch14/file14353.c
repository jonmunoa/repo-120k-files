// fichero 14353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14353;

Registro14353 crear_registro14353(int id) {
    Registro14353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14353(Registro14353 r) {
    return r.valor + r.id;
}
