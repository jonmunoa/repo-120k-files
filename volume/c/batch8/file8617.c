// fichero 8617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8617;

Registro8617 crear_registro8617(int id) {
    Registro8617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8617(Registro8617 r) {
    return r.valor + r.id;
}
