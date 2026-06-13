// fichero 26325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26325;

Registro26325 crear_registro26325(int id) {
    Registro26325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26325(Registro26325 r) {
    return r.valor + r.id;
}
