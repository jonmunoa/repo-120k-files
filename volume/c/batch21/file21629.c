// fichero 21629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21629;

Registro21629 crear_registro21629(int id) {
    Registro21629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21629(Registro21629 r) {
    return r.valor + r.id;
}
