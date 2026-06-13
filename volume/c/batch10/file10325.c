// fichero 10325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10325;

Registro10325 crear_registro10325(int id) {
    Registro10325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10325(Registro10325 r) {
    return r.valor + r.id;
}
