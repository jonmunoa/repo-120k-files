// fichero 10929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10929;

Registro10929 crear_registro10929(int id) {
    Registro10929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10929(Registro10929 r) {
    return r.valor + r.id;
}
