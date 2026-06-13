// fichero 26361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26361;

Registro26361 crear_registro26361(int id) {
    Registro26361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26361(Registro26361 r) {
    return r.valor + r.id;
}
