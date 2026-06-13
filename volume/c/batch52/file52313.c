// fichero 52313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52313;

Registro52313 crear_registro52313(int id) {
    Registro52313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52313(Registro52313 r) {
    return r.valor + r.id;
}
