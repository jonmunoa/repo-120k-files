// fichero 16361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16361;

Registro16361 crear_registro16361(int id) {
    Registro16361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16361(Registro16361 r) {
    return r.valor + r.id;
}
