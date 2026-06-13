// fichero 44381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44381;

Registro44381 crear_registro44381(int id) {
    Registro44381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44381(Registro44381 r) {
    return r.valor + r.id;
}
