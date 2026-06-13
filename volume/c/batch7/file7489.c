// fichero 7489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7489;

Registro7489 crear_registro7489(int id) {
    Registro7489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7489(Registro7489 r) {
    return r.valor + r.id;
}
