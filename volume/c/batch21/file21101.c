// fichero 21101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21101;

Registro21101 crear_registro21101(int id) {
    Registro21101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21101(Registro21101 r) {
    return r.valor + r.id;
}
