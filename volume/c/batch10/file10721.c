// fichero 10721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10721;

Registro10721 crear_registro10721(int id) {
    Registro10721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10721(Registro10721 r) {
    return r.valor + r.id;
}
