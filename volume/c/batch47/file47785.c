// fichero 47785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47785;

Registro47785 crear_registro47785(int id) {
    Registro47785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47785(Registro47785 r) {
    return r.valor + r.id;
}
