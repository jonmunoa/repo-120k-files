// fichero 40145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40145;

Registro40145 crear_registro40145(int id) {
    Registro40145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40145(Registro40145 r) {
    return r.valor + r.id;
}
