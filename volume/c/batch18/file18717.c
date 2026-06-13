// fichero 18717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18717;

Registro18717 crear_registro18717(int id) {
    Registro18717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18717(Registro18717 r) {
    return r.valor + r.id;
}
