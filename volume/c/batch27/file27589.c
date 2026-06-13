// fichero 27589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27589;

Registro27589 crear_registro27589(int id) {
    Registro27589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27589(Registro27589 r) {
    return r.valor + r.id;
}
