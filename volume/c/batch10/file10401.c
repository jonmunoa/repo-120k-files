// fichero 10401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10401;

Registro10401 crear_registro10401(int id) {
    Registro10401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10401(Registro10401 r) {
    return r.valor + r.id;
}
