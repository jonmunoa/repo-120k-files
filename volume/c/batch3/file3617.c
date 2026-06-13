// fichero 3617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3617;

Registro3617 crear_registro3617(int id) {
    Registro3617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3617(Registro3617 r) {
    return r.valor + r.id;
}
