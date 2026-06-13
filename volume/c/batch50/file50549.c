// fichero 50549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50549;

Registro50549 crear_registro50549(int id) {
    Registro50549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50549(Registro50549 r) {
    return r.valor + r.id;
}
