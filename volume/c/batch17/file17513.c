// fichero 17513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17513;

Registro17513 crear_registro17513(int id) {
    Registro17513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17513(Registro17513 r) {
    return r.valor + r.id;
}
