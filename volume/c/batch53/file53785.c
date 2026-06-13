// fichero 53785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53785;

Registro53785 crear_registro53785(int id) {
    Registro53785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53785(Registro53785 r) {
    return r.valor + r.id;
}
