// fichero 8717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8717;

Registro8717 crear_registro8717(int id) {
    Registro8717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8717(Registro8717 r) {
    return r.valor + r.id;
}
