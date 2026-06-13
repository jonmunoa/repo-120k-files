// fichero 10713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10713;

Registro10713 crear_registro10713(int id) {
    Registro10713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10713(Registro10713 r) {
    return r.valor + r.id;
}
