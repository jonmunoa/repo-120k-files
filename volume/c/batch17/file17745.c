// fichero 17745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17745;

Registro17745 crear_registro17745(int id) {
    Registro17745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17745(Registro17745 r) {
    return r.valor + r.id;
}
