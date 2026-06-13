// fichero 19785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19785;

Registro19785 crear_registro19785(int id) {
    Registro19785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19785(Registro19785 r) {
    return r.valor + r.id;
}
