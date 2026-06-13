// fichero 18329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18329;

Registro18329 crear_registro18329(int id) {
    Registro18329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18329(Registro18329 r) {
    return r.valor + r.id;
}
