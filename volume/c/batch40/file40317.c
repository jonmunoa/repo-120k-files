// fichero 40317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40317;

Registro40317 crear_registro40317(int id) {
    Registro40317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40317(Registro40317 r) {
    return r.valor + r.id;
}
