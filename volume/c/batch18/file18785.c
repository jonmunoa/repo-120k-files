// fichero 18785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18785;

Registro18785 crear_registro18785(int id) {
    Registro18785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18785(Registro18785 r) {
    return r.valor + r.id;
}
