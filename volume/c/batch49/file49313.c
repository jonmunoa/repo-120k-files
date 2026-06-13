// fichero 49313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49313;

Registro49313 crear_registro49313(int id) {
    Registro49313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49313(Registro49313 r) {
    return r.valor + r.id;
}
