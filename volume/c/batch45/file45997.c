// fichero 45997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45997;

Registro45997 crear_registro45997(int id) {
    Registro45997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45997(Registro45997 r) {
    return r.valor + r.id;
}
