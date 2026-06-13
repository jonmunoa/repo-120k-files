// fichero 10977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10977;

Registro10977 crear_registro10977(int id) {
    Registro10977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10977(Registro10977 r) {
    return r.valor + r.id;
}
