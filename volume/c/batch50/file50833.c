// fichero 50833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50833;

Registro50833 crear_registro50833(int id) {
    Registro50833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50833(Registro50833 r) {
    return r.valor + r.id;
}
