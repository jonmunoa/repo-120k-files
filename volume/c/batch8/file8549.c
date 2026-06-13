// fichero 8549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8549;

Registro8549 crear_registro8549(int id) {
    Registro8549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8549(Registro8549 r) {
    return r.valor + r.id;
}
