// fichero 6325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6325;

Registro6325 crear_registro6325(int id) {
    Registro6325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6325(Registro6325 r) {
    return r.valor + r.id;
}
