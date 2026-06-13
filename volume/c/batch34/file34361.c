// fichero 34361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34361;

Registro34361 crear_registro34361(int id) {
    Registro34361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34361(Registro34361 r) {
    return r.valor + r.id;
}
