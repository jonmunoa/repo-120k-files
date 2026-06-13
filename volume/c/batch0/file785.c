// fichero 785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro785;

Registro785 crear_registro785(int id) {
    Registro785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro785(Registro785 r) {
    return r.valor + r.id;
}
