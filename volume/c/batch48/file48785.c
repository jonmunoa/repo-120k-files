// fichero 48785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48785;

Registro48785 crear_registro48785(int id) {
    Registro48785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48785(Registro48785 r) {
    return r.valor + r.id;
}
