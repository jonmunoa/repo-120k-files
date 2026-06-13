// fichero 17329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17329;

Registro17329 crear_registro17329(int id) {
    Registro17329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17329(Registro17329 r) {
    return r.valor + r.id;
}
