// fichero 15693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15693;

Registro15693 crear_registro15693(int id) {
    Registro15693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15693(Registro15693 r) {
    return r.valor + r.id;
}
