// fichero 21449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21449;

Registro21449 crear_registro21449(int id) {
    Registro21449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21449(Registro21449 r) {
    return r.valor + r.id;
}
