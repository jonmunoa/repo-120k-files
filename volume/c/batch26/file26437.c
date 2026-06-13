// fichero 26437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26437;

Registro26437 crear_registro26437(int id) {
    Registro26437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26437(Registro26437 r) {
    return r.valor + r.id;
}
