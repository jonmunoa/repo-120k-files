// fichero 40413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40413;

Registro40413 crear_registro40413(int id) {
    Registro40413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40413(Registro40413 r) {
    return r.valor + r.id;
}
