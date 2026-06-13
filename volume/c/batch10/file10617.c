// fichero 10617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10617;

Registro10617 crear_registro10617(int id) {
    Registro10617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10617(Registro10617 r) {
    return r.valor + r.id;
}
