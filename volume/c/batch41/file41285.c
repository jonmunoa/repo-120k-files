// fichero 41285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41285;

Registro41285 crear_registro41285(int id) {
    Registro41285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41285(Registro41285 r) {
    return r.valor + r.id;
}
