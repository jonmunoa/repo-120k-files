// fichero 34449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34449;

Registro34449 crear_registro34449(int id) {
    Registro34449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34449(Registro34449 r) {
    return r.valor + r.id;
}
