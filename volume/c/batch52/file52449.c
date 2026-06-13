// fichero 52449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52449;

Registro52449 crear_registro52449(int id) {
    Registro52449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52449(Registro52449 r) {
    return r.valor + r.id;
}
