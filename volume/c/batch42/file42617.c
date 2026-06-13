// fichero 42617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42617;

Registro42617 crear_registro42617(int id) {
    Registro42617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42617(Registro42617 r) {
    return r.valor + r.id;
}
