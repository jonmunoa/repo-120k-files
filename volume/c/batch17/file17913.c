// fichero 17913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17913;

Registro17913 crear_registro17913(int id) {
    Registro17913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17913(Registro17913 r) {
    return r.valor + r.id;
}
