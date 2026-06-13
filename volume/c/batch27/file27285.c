// fichero 27285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27285;

Registro27285 crear_registro27285(int id) {
    Registro27285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27285(Registro27285 r) {
    return r.valor + r.id;
}
