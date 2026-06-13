// fichero 40157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40157;

Registro40157 crear_registro40157(int id) {
    Registro40157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40157(Registro40157 r) {
    return r.valor + r.id;
}
