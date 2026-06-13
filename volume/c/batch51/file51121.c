// fichero 51121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51121;

Registro51121 crear_registro51121(int id) {
    Registro51121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51121(Registro51121 r) {
    return r.valor + r.id;
}
