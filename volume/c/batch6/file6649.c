// fichero 6649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6649;

Registro6649 crear_registro6649(int id) {
    Registro6649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6649(Registro6649 r) {
    return r.valor + r.id;
}
