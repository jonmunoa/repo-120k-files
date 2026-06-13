// fichero 10801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10801;

Registro10801 crear_registro10801(int id) {
    Registro10801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10801(Registro10801 r) {
    return r.valor + r.id;
}
