// fichero 24005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24005;

Registro24005 crear_registro24005(int id) {
    Registro24005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24005(Registro24005 r) {
    return r.valor + r.id;
}
