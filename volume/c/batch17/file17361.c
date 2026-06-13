// fichero 17361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17361;

Registro17361 crear_registro17361(int id) {
    Registro17361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17361(Registro17361 r) {
    return r.valor + r.id;
}
