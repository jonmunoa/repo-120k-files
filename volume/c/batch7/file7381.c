// fichero 7381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7381;

Registro7381 crear_registro7381(int id) {
    Registro7381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7381(Registro7381 r) {
    return r.valor + r.id;
}
