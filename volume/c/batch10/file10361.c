// fichero 10361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10361;

Registro10361 crear_registro10361(int id) {
    Registro10361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10361(Registro10361 r) {
    return r.valor + r.id;
}
