// fichero 26313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26313;

Registro26313 crear_registro26313(int id) {
    Registro26313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26313(Registro26313 r) {
    return r.valor + r.id;
}
